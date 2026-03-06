/**
* rev_string - reverses a string
* @s: string to reverse
* Return: void
*/
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	i = 0;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
