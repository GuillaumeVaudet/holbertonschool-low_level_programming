#include "main.h"

/**
* _islower - check for lowercase character
* @c: The char to test
* Return: 1 if c is lower and 0 if not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
