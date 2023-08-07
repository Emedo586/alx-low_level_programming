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
char buffer[];
ssize_t _read, _write;

if (filename == NULL)
{
return (0); 
}
//To open file
fd = open(filename, O_RDONLY);
if (fd == -1)
{ 
return (0);
}
// For Buffer
buffer = malloc(letters * sizeof(char));
if (buffer == 0)
return (0);
// To read file
_read = read(fd, buffer, letters);
if (_read == -1)
{
free(buffer);
close(fd);
return (0);
}
// To write file
_write = write(STDOUT_FILENO, buffer, _read);
if (_write == -1)
{
free(buffer);
close(fd);
return (0);
}
close(fd);
return (_read);
}
