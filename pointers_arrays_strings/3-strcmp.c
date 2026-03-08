/**
* _strcmp - compares two string
* @s1: First string to compare
* @s2: Second string to compare
* Return: 0 if the two string are identical
* negative int if s1 is less than s2
* positive int if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
