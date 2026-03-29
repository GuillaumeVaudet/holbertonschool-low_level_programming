/**
 * square_helper - checks for the square root
 * @n: int
 * @i: int
 * Return: int
 */
int square_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (square_helper(n, i + 1));
}

/**
* _sqrt_recursion - found the natural square of a number
* @n: int
* Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_helper(n, 0));
}
