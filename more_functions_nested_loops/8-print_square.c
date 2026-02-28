#include "main.h"
/**
* print_square - draw a straight line in the terminal
* @size: is the size of square
* Return: void
*/

void print_square(int size)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
