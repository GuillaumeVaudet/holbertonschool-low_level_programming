/**
* _strstr - locates a substring
* @haystack: string where to search
* @needle: string to search
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
