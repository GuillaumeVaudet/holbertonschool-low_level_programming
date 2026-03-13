#include <stdlib.h>
/**
* _realloc - reallocates a memory block
* @ptr: poointer where the old data is stored
* @old_size: old size of memory allocation
* @new_size: new memory size to allocate
* Return: pointer to the new allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i = 0;
	unsigned int copy_size;

	if (old_size < new_size)
	{
		copy_size = old_size;
	} else
		copy_size = new_size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

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
	while (i < copy_size)
	{
		new_ptr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
