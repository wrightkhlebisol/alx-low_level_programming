#include "main.h"

/**
 * print_error - Print error
 * @message: message to print
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * copy_file - Copy file from to to
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: int (represents response state)
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_to = 0;
	int fd_from = open(file_from, O_RDONLY);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (fd_from == -1)
	{
		print_error(file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		print_error(file_to);
		close(fd_from);
		return (99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error(file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		print_error(file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	close(fd_from);
	close(fd_to);

	return (0);
}

/**
 * main - Entry
 * @argc: Argument count
 * @argv: Argument value
 *
 * Return: int (represents response state)
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int result;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];
 
	result = copy_file(file_from, file_to);

	return (result);
}
