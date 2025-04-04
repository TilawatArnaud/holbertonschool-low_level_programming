#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message and exit with code.
 * @code: Exit code.
 * @msg: Message format string.
 * @arg: Argument to insert in message.
 */
void print_error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * close_fd - Close file descriptor and handle error.
 * @fd: File descriptor to close.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy the content of a file to another.
 * @ac: Argument count.
 * @av: Argument values.
 *
 * Return: 0 on success, or exit on failure.
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
		close_fd(fd_from);
		print_error(99, "Error: Can't write to file %s\n", av[2]);
	}

	while ((r_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error(99, "Error: Can't write to file %s\n", av[2]);
		}
	}

	if (r_bytes == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		print_error(98, "Error: Can't read from file %s\n", av[1]);
	}

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close file descriptor %d\n", av[1]);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close file descriptor %d\n", av[2]);

	return (0);
}
