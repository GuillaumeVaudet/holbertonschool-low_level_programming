/**
* _memset - fills memory with a constant byte
* @s: area pointers need to be feeled
* @b: constant byte
* @n: number of bytes to fill
* Return: a pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
