#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUF_SIZE 1024

/**
 * main - program that copies the content of a file to another file.
 * @ac: the argument count.
 * @av: the argument vector.
 *
 * Return: 0 on success.
 *
 */
int main(int ac, char **av)
{
int fd_0, fd_1;
int res_0, res_1;
char *buffer;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
buffer = malloc(BUF_SIZE * sizeof(char));
if (!buffer)
{
return (0);
}

fd_1 = open(av[1], O_RDONLY);
/*error_98(fd_1, buffer, av[1]);*/
fd_0 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, PERMISSIONS, 0664);
/*error_99(fd_0, buffer, av[2]);*/
do {
res_0 = read(fd_1, buffer, BUF_SIZE);
if (res_0 == 0)
break;
/*error_98(res_0, buffer, av[1])*/
res_1 = write(fd_0, buffer, res_0);
/*error_99(res_1, buffer, av[2])*/
} while (res_1 >= BUF_SIZE);
res_0 = close(fd_0);
/*error_100(res_0, buffer)*/
res_0 = close(fd_1);
/*error_100(res_0, buffer);*/
free(buffer);
return (0);
}

/**
 * error_98 - checks for error 98.
 * @fd_0: value to check.
 * @av: the argument vector.
 * @buffer: the buffer.
 *
 *
 */
void error_98(int fd_0, char *buffer, char *av)
{
if (fd_0 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n",
av);
free(buffer);
exit(98);
}
}

/**
 * error_99 - checks for error 99.
 * @fd_0: value to check.
 * @av: the argument vector.
 * @buffer: the buffer.
 *
 *
 */
void error_99(int fd_0, char *buffer, char *av)
{
if (fd_0 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write from file NAME_OF_THE_FILE %s\n",
av);
free(buffer);
exit(99);
}
}

/**
 * error_100 - checks for error 100.
 * @fd_0: value to check.
 *
 * @buffer: the buffer.
 *
 *
 */
void error_100(int fd_0, char *buffer)
{
if (fd_0 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd_0);
free(buffer);
exit(100);
}
}
