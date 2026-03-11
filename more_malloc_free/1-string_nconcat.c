#include <stdlib.h>

/**
* _strlen - Check length of a string
* @str: string to  quantify
* Return: int - length of the string
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
* string_nconcat - concatenates two strings
* @s1: first string to concatenate
* @s2: second string to concatenate
* @n: n bytes of s2 to concatenate
* Return: pointer to allocated memory of the concatenation
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int total_len;
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n >= len_s2)
	{
		total_len = len_s1 + len_s2;
	} else
	{
		total_len = len_s1 + n;
	}
	ptr = malloc(sizeof(char) * (total_len + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < total_len)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
