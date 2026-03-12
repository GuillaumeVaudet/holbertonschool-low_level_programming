#include <stdlib.h>

/**
* array_range - create an array of integers
* @min: int - minimal value of range
* @max: int - maximum value of range
* Return: pointer of the int array
*/
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	i = 0;
	j = min;
	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	while (i <= (max - min))
	{
		ptr[i] = j;
		j++;
		i++;
	}
	return (ptr);
}
