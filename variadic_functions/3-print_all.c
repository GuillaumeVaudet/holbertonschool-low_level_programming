#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* _print_char - print a char
* @args: va_list
* Return: void
*/
void _print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
* _print_int - print an integer
* @args: va_list
* Return: void
*/
void _print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
* _print_float - print a float
* @args: va_list
* Return: void
*/
void _print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
* _print_string - print a string
* @args: va_list
* Return: void
*/
void _print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - print all that pass in args
 * @format: string - could be c, i, f, s
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;
	int first;
	print_element types[] = {
		{'c', _print_char},
		{'i', _print_int},
		{'f', _print_float},
		{'s', _print_string}
	};

	i = 0;
	first = 0;
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].id)
			{
				if (first)
					printf(", ");
				types[j].f(args);
				first = 1;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
