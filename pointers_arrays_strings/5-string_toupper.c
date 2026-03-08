/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* @s: pointer of the string to be modified
* Return: pointer to destination char
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
