#include <stdlib.h>
/**
* realloc - reallocates a memory block
* @ptr: poointer where the old data is stored
* @old_size: old size of memory allocation
* @new_size: new memory size to allocate
* Return: pointer to the new allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL && new_size == 0)
		return (NULL);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	while (i < old_size)
	{
		new_ptr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
