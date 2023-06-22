#include "main.h"

/**
 * print_diagonal - draft
 *
 * @n: draft
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');

			if (n == i)
				break;
			for (j = 0; j < i; j++)
				_putchar(' ');

		}
	}
	else
	{
		_putchar('\n');
	}
}
