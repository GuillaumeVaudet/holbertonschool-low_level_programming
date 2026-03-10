#include <stdio.h>
#include <stdlib.h>
/**
* create_array - create an array and initializes it with a specific char
* @size: size to allocate for the array
* @c: char used to fill the array
* Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
