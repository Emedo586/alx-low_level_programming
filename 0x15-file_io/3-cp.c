#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUF_SIZE 1024

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: 1 on success -1 on failure.
 *
 */
int main(int ac, char **av)
{
int fd_from = 0;
int fd_to = 0;
char *buffer;
ssize_t fp;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
buffer = malloc(BUF_SIZE * sizeof(char));
if (!buffer)
return (0);

fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n",
av[1]);
free(buffer);
exit(98);
}
fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", av[2]);
free(buffer);
exit(99);
}
while ((fp = read(fd_from, buffer, BUF_SIZE)) > 0)
if (write(fd_to, buffer, fp) != fp)
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", av[2]);
free(buffer);
exit(99);
if (fp == -1)
dprintf(STDERR_FILENO, "Error: Can't read to NAME_OF_THE_FILE %s\n", av[1]);
free(buffer);
exit(98);
fd_from = close(fd_from);
fd_to = close(fd_to);
if (fd_from)
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd_from);
free(buffer);
exit(100);
if (fd_to)
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd_from);
free(buffer);
exit(100);
return (EXIT_SUCCESS);
}
