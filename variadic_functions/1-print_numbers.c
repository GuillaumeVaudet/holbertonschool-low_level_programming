#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints number followed by a new line
* @separator: string - be printed between numbers
* @n: unsigned int - number of integer passed
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
