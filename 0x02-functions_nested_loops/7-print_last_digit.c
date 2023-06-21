#include "main.h"

/**
 * print_last_digit - draft
 * @n: draft
 *
 * Return: draft
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');

	return (m);
}
