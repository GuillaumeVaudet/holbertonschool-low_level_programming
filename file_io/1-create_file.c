#include "main.h"

/**
 * _strlen - counts the size of a string
 * @s: pointer to string - string to measure
 * Return: int - size of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a file
 * @filename: pointer to a string - name of the file to create
 * @text_content: pointer to a string - content to put into the file end by \0
 * Return: int - 1 on success, -1 on failure (file can not be created,
 * file can not be written, write "fails", etc, ...)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
