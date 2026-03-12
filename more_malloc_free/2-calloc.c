#include <stdlib.h>
/**
* _calloc - allocates memory for an array
* @nmenb: unsigned int - for number of element of the array
* @size: int - size of each element
* Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmenb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmenb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmenb * size);

	if (ptr == NULL)
		return (NULL);

	while (i < (nmenb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
