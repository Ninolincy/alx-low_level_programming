#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * print_address - prints address related
 * @ptr: pointer to address
 *
 * Return: void
 */
void print_address(char *ptr)
{
	int begin;
	char system;
	int i;

	printf("  Entry point address:				0x");

	system = ptr[4] + '0';
	if (system == '1')
	{
		begin = 26;
		printf("80");

		for (i = begin; i >= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
		if (ptr[7] == 6)
			printf("00");
	}
	if (system == '2')
	{
		begin = 26;
		for (i = begin; i > 23; i--)
		{
			if (ptr[i] >= 0)
				printf("%02x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%02x", 256 + ptr[i]);
		}
	}
	printf("\n");
}
/**
 * print_types - prints types of files
 * @ptr: pointer to file types
 *
 * Return: void
 */
void print_types(char *ptr)
{
	char t_file = ptr[16];

	if (ptr[5] == 1)
		t_file = ptr[16];
	else
		t_file = ptr[17];

	printf("  Type:				");

	if (t_file == 0)
		printf("NONE (No file type)\n");
	else if (t_file == 1)
		printf("REL (Relocatable file)\n");
	else if (t_file == 2)
		printf("EXEC (Executable file)\n");
	else if (t_file == 3)
		printf("DYN (Shared object file)\n");
	else if (t_file == 4)
		printf("CORE (Core file)\n");
	else
		printf("unknown: %x\n", t_file);
}
/**
 * prints_OS/ABI - prints operating system and ABI
 * @ptr: pointer to the OS/ABI
 *
 * Return: void
 */
void prints_oSABI(char *ptr)
{
	char os = ptr[7];

	printf(" OS/ABI:			");

	if (os == 0)
		printf("UNIX - System V\n");
	else if (os == 2)
		printf("UNIX - NetBSD\n");
	else if (os == 6)
		printf("UNIX - Solaris\n");
	else
		printf("unknown: %x\n", os);

	printf("  ABI version:			%d\n", ptr[8]);
}
/**
 * prints_data - prints data
 * @ptr: pointer to data
 *
 * Return: void
 */
void prints_data(char *ptr)
{
	char data = ptr[5];

	printf(" Data:			2's complement");
	if (data == 1)
		printf(" , little endian\n");
	if (data == 2)
		printf(" , big endian\n");
}
/**
 * print_version - prints the version of the system
 * @ptr: pointer to the version
 *
 * Return: void
 */
void print_version(char *ptr)
{
	int version = ptr[6];

	printf(" Version:		%d", version);
	if (version == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}
/**
 * print_magic - prints magical information
 * @ptr: pointer to magic
 *
 * Return: void
 */
void print_magic(char *ptr)
{
	int bytes;

	printf(" Magic:	");

	for (bytes =0; bytes < 16; bytes++)
		printf("%02x", ptr[bytes]);

	printf("\n");
}
/**
 * check_system - checks the system version
 * @ptr: pointer to elf file
 *
 * Return: void
 */
void check_system(char *ptr)
{
	char system = ptr[4] + '0';

	if (system == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (system == '1')
		printf("Class:			ELF32\n");
	if (system == '2')
		printf("Class:			ELF64\n");

	prints_data(ptr);
	print_version(ptr);
	prints_oSABI(ptr);
	print_types(ptr);
	print_address(ptr);
}
/*check if it's an elf file*/
/**
 * check_elf - check if the file is an elf file
 * @ptr: pointer to the elf file
 *
 * Return: 0
 */

int check_elf(char *ptr)
{
	int address = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (address == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);
	return (0);
}

/**
 * main - checks if it's an elf file
 * @argc: Argument count
 * @argv: Agument variable
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fd;
	int _reads;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: file can't open\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	_reads = read(fd, ptr, 27);
	if (_reads == -1)
	{
		dprintf(STDERR_FILENO, "Error: file can't read\n");
		exit(98);
	}
	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Error: It's not an ELF\n");
		exit(98);
	}
	check_system(ptr);
	close(fd);

	return (0);
}

