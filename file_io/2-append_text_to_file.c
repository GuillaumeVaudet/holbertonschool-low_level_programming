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
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to string - filename where to put text_content
 * @text_content: pointer to string - content to put at the end of the file
 * Return: int - 1 if success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
