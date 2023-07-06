#include "main.h"

/**
 * _sqrt_recursion0 - draft
 * @n: draft
 * @c: draft
 * Return: draft
 */
int _sqrt_recursion0(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (n == c * c)
	{
		return (c);
	}
	else
	{
		return (_sqrt_recursion0(n, ++c));
	}
}

/**
 * _sqrt_recursion - draft
 * @n: draft
 * Return: draft
 */
int _sqrt_recursion(int n)
{
	int c;

	c = 2;
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (_sqrt_recursion0(n, c));
}
