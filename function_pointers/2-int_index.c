#include <stdlib.h>
/**
* int_index - searches an integer into an array
* @array: array to search the element
* @size: int - number of element in the array*
* @cmp: pointer to function
* Return: integer - the index of the first element the
* cmp function does not return 0
* reutrn -1 if no element matches or if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int element;

	int i = 0;

	if (size <=  0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		element = cmp(array[i]);
		if (element != 0)
			return (i);
		i++;
	}
	return (-1);
}
