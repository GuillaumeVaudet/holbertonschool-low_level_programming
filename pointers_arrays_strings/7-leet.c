/**
* leet - encode a string into 1337
* @s: string to encode
* Return: encoded char
*/

char *leet(char *s)
{
	int i, j;
	char find[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (find[j] != '\0')
		{
			if (s[i] == find[j])
			{
				s[i] = replace[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
