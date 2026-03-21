#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints strings followed by a new line
* @separator: string
* @n: unsigned int - number of args
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;

	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
