#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 * @filename: filename to read.
 * @letters: number of letters to read and print.
 *
 * Return: number of letters or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char buf[8 * READ_BUF_SIZE];
ssize_t bytes;

if (!filename || !letters)
{
return (0);
}
/*To open file*/
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
/* For buffer */
/* buffer = malloc(letters * sizeof(char))
 * if (buffer == NULL)
 * return (0);*/
/*To read & write file*/
bytes = read(fd, &buf[0], letters);
bytes = write(fd, &buf[0], bytes);
close(fd);
return (bytes);
}
