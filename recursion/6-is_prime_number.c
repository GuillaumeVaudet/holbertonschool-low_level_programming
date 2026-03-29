/**
 * prime_helper - recursive function check each possibilities
 * @n: int
 * @i: int
 * Return: 1 if n is a prime number - 0 if not
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}
/**
 * is_prime_number - found if the input is a prime number
 * @n: int - number to test
 * Return: 1 if the input is a prime number - 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
