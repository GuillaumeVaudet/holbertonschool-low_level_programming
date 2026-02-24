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
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %i and is greater than 5", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %i and is 0", n, last_digit);
	}
	if (last_digit < 6)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
