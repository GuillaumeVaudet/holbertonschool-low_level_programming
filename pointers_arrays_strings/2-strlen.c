/**
* _strlen - return the length of a string
* @s: pointer of the begining of the string
* Return: integer that represent the lenght of the string
*/

int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}

	return (counter);
}
