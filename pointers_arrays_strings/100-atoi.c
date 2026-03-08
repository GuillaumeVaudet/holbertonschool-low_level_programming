/**
* _atoi - convert a string to an integer
* @s: string to convert
* Return: integer
*/

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int dest = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\v' || s[i] == '\n'
		|| s[i] == '\f' || s[i] == '\r')
		{
			i++;
		}

		while (s[i] == '+' || s[i] == '-')
		{
			if (s[i] == '-')
				sign *= -1;
			i++;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			dest = dest * 10 + (s[i] - '0');
			i++;
		}
		if (started)
			return (dest * sign);
		i++;
	}
	return (0);
}
