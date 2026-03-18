#include "dog.h"
#include <stdlib.h>
/**
* free_dog - deallocate memory from a dog struct
* @d: pointer to the struct to deallocate
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
