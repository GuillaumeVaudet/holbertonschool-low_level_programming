/**
* _strchr - locates a character in a string
* @s: the string where we search
* @c: the char to found
* Return: a pointer to the first occurence of the char in the string
* or NULL if the char is not found
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		if (s[i] == '\0')
			break;
		i++;
	}

	return (0);
}
