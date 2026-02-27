/**
* _isdigit - check if a char is upper or not
* @c: item to test
* Return: 1 if c is updigitper and 0 if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
