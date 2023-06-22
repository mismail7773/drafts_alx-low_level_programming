#include "main.h"

/**
 * print_square
 *
 * @size: draft
 */
void print_square(int size)
{
	int i, j, n;

	n = size;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{

			for (j = 1; j <= n; j++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
