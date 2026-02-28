#include "main.h"
/**
* print_diagonal - draw a straight line in the terminal
* @n: is the number of times the character '\' should be print
* Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
