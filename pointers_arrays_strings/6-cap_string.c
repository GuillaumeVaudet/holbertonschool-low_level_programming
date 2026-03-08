/**
* is_separator - check if the char is a separator
* @c: char to check
* Return: 1 if it's a separator - 0 is not
 */

int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
	c == '.' || c == '!' || c == '?' || c == '\"' || c == '(' ||
	c == ')' || c == '{' || c == '}')
		return (1);

	return (0);
}

/**
* cap_string - capitalizes all words of a string
* @s: string to modified
* Return: destination char
*/
char *cap_string(char *s)
{
	int i;

	i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	while (s[i] != '\0')
	{
		if (is_separator(s[i]))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
