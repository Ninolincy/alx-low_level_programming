#include "main.h"
/**
 * main - copies the comtents of a file
 * @argc: Argument count
 * @argv: Argument size
 * Return: 0
 */
int main(int argc, char *argv[])
{
int src, dst, rd_bytes;
char buff[BUFFER_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

src = open(argv[1], O_RDONLY);
if (src == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664); /*rw_rw_r__*/
rd_bytes = read(src, buff, BUFFER_SIZE);
if (dst == -1 || rd_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
if ((close(src)) == -1 || (close(dst)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
exit(100);
}
return (0);
}
