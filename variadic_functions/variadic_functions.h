#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
* print_element - new struct to print
* @id: char
* @f: pointer to a func
*/
#include <stdarg.h>
typedef struct
{
	char id;
	void (*f)(va_list);
} print_element;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
