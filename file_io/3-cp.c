#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
/**
 * main - entry point
 * @argc: int - nulber of args
 * @argv: double pointer of char - array of string
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int fd_source, fd_target;
	char *file_to, *file_from;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	umask(0); /* reset umask to apply exact permissions on file creation */
	fd_target = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_target == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_source);
		exit(99);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		close(fd_source);
		close(fd_target);
		exit(1);
	}
	while ((bytes_read = read(fd_source, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_target, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			close(fd_source);
			close(fd_target);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd_source);
		close(fd_target);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_source) == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	if (close(fd_target) == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_target);
		exit(100);
	}
	free(buffer);
	return (0);
}
