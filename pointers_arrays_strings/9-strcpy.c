/**
* _strcpy - copies the string pointed to by src
* included the terminating null byte (\0)
* @dest: pointer to char
* @src: pointer to src
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
