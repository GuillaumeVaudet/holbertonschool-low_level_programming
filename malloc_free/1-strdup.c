#include <stdlib.h>
/**
* _strdup - copy a string given as a parameter
* @str: string to copy
* Return: a pointer to a new allocated space in memory
*/
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	
	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	
	if (ptr == NULL)
		return (NULL);

	i=0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
