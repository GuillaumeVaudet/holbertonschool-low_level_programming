#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int c;
	int a;

	c = 65;
	a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	while (c <= 90)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
