#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the comtents of a file
 * @argc: Argument count
 * @argv: Argument size
 * Return: 0
 */
int main(int argc, char *argv[])
{
int src; /*file_from*/
int dst; /*file_to*/
int rd_bytes, wr_bytes;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s cp file_from file_to\n", argv[0]);
exit(97);
}

src = open(argv[1], O_RDONLY);
if (src == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664); /*rw_rw_r__*/
if (dst == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

rd_bytes = read(src, buff, 1024);

while (rd_bytes > 0)
{
wr_bytes = write(dst, buff, rd_bytes);
if (wr_bytes != rd_bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if ((close(src)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
exit(100);
}
if ((close(dst)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst);
exit(100);
}

return (0);
}
