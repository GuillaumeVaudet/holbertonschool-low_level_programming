#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: unsigned int - size to allocate
* Return: a pointer to the allocated memory (success) - 98 if failed
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
