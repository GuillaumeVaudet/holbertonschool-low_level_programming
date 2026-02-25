#include "main.h"

/**
* _abs - prints the absolute value of an integer
* @n: The int to test
* Return: 1 and prints '+' if n is positive and 0 if n == 0,
* -1 and prints '-' if n is negative
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	} else if (n > 0)
	{
		return (n);
	}
	return (0);
}
