#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits with a given code.
 * @code: Exit code to use.
 * @msg: Format string for the error message.
 * @arg: Argument to include in the message.
 */
void print_error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * close_fd - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
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
 * copy_file - Reads from one file and writes to another.
 * @fd_from: File descriptor to read from.
 * @fd_to: File descriptor to write to.
 * @file_to: Name of the destination file.
 * @file_from: Name of the source file.
 */
void copy_file(int fd_from, int fd_to,
			   const char *file_to, const char *file_from)
{
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	while ((r_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (r_bytes == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}
}

/**
 * main - Entry point, copies content from a file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, exits with various codes on failure.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}

	copy_file(fd_from, fd_to, av[2], av[1]);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
