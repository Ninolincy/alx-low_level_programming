#include "main.h"

/**
 * append_text_to_file - Appends text at the end a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * 
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int newFile, wr, len = 0;

    if (filename == NULL)
        return (-1);

    newFile = open(filename, O_WRONLY | O_APPEND);

    if (text_content != NULL)
    wr = write(newFile, text_content, text_content[len]);
    close(newFile);

    if (newFile == -1 || len == -1)
        return (-1);

    return (1);

}