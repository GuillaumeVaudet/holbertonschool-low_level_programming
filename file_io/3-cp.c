#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
/**
 * copy_content - copy content from one file descriptor to another
 * @fd_from: int - source file descriptor
 * @fd_to: int - target file descriptor
 * @buf: pointer to char - buffer to store read bytes
 * @file_to: pointer to char - name of the target file for error message
 * Return: void
 */
void copy_content(int fd_from, int fd_to, char *buf, char *file_to)
{
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buf, 1024)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			free(buf);
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		free(buf);
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		exit(98);
	}
}

/**
 * close_files - free buffer and closes files
 * @fd: int - file_descriptor number
 * @buf: pointer to char - allocated memory for buffer
 */
void close_files(int fd, char *buf)
{
	free(buf);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - entry point
 * @argc: int - nulber of args
 * @argv: double pointer of char - array of string
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int fd_source, fd_target;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	umask(0); /* reset umask to apply exact permissions on file creation */
	fd_target = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_target == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
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
	copy_content(fd_source, fd_target, buffer, argv[2]);
	if (close(fd_source) == -1)
		close_files(fd_source, buffer);
	if (close(fd_target) == -1)
		close_files(fd_target, buffer);
	free(buffer);
	return (0);
}
