#include "main.h"
/**
* print_line - draw a straight line in the terminal
* @n: is the number of times the character '_' should be print
* Return: void
*/

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
