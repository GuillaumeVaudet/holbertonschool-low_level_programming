#include "main.h"

/**
* print_triangle - Prnt a triangle
* @size: size of the triangle
* Return: 0
*/

void print_triangle(int size)
{
	int i;
	int j;

	i = 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
