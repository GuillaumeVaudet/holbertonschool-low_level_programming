#include "main.h"

/**
* swap_int - Swap value of two int
* @a: pointer of first value to swith
* @b: pointer of second value to switch
* Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
