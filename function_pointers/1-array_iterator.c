#include <stdlib.h>
/**
* array_iterator - execute a function given on each element of an array
* @array: array to pick element
* @size: size of the array
* @action: function to execute
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
