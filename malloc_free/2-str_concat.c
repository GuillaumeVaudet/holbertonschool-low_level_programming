#include <stdlib.h>
/**
* str_concat - concatenate two string
* @s1: first string to concatenate
* @s2: second string to concatenate
* Return: pointer to a new allocated space in memory if success
* NULL if failed
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
