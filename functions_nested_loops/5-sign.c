#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: The int to test
* Return: 1 and prints '+' if n is positive and 0 if n == 0,
* -1 and prints '-' if n is negative
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
