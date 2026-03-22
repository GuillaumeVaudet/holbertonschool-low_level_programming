#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - print a char
* @args: char - char to print
* Return: void
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_int - print an int
* @args: int - int to print
* Return: void
*/
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
* print_float - print a float
* @args: float - float to print
* Return: void
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
* print_string - print a string
* @args: string - string to print
* Return: void
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
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
	int i, j, first;
	char indicator;

	print_element array_of_struct[4] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	i = 0;
	first = 0;
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		indicator = format[i];
		j = 0;

		while (j < 4)
		{
			if (indicator == array_of_struct[j].id)
			{
				if (first == 1)
					printf(", ");
				array_of_struct[j].f(args);
				first = 1;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
