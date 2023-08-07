#include "main.h"

/**
 * _strlen - renturns the length of a string.
 * @s: the string length to check.
 * Return: string length integer.
 */
int _strlen(char *s)
{
int j = 0;
if (s == NULL)
{
return (0);
}
while (*s++)
j++;
return (j);
}

/**
* append_text_to_file - To appends text at the end of a file.
* @filename: filename to append.
* @text_content: content of the file to write.
* Return: 1 if file exists, -1 if it doesn't.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes = 0, length = _strlen(text_content);
if (!filename)
{
return (-1);
}

/*The append mode to open file*/
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
/* To write content to file */
if (length)
bytes = write(fd, text_content, length);
{
close(fd);
return (bytes == length ? 1 : -1);
}
}
