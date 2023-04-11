#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output
 * @filename: Name of file to read
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t newFile, rd, wr;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	newFile = open(filename, O_RDONLY);
	rd = read(newFile, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1 || newFile == -1 || rd == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(newFile);

	return (wr);
}
