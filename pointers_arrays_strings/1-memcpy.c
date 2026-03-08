/**
* _memcpy - copies memory area
* @dest: pointer of copy destination
* @src: pointer of source to cpy
* @n: number of bytes to copy
* Return: pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
