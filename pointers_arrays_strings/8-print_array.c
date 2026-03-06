#include <stdio.h>

/**
* print_array - prints n elements of an array of int
* @a: pointer
* @n: int
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
