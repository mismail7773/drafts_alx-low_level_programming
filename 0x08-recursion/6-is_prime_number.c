#include "main.h"

/**
 * is_prime_number0 - draft
 * @n: draft
 * @i: draft
 * Return: draft
 */
int is_prime_number0(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (n % i != 0 && i > 2)
	{
		i--;
		return (is_prime_number0(n, i));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - draft
 * @n: draft
 * Return: draft
 */
int is_prime_number(int n)
{
	int i;

	i = n;
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	if (n < 0)
		return (0);
	return (is_prime_number0(n, i - 1));
}
