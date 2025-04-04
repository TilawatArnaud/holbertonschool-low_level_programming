#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits with given code.
 * @exit_code: Exit code.
 * @message: Error message.
 * @arg: Argument (like file name or FD).
 */
void print_error(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, exits with error code on failure.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}
	while ((r_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", av[2]);
		}
	}
	if (r_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", av[1]);
	}

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd %d\n", av[1]);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", av[2]);

	return (0);
}
