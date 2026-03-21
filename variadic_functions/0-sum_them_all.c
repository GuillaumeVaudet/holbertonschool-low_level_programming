#include <stdarg.h>
/**
* sum_them_all - make the sum of all func parameters
* @n: unsigned int
* Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;
	unsigned int counter = 0;

	va_start(args, n);
	while (counter < n)
	{
		sum += va_arg(args, int);
		counter++;
	}
	va_end(args);
	return (sum);
}
