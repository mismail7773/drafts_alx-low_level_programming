#include "main.h"

/**
 * print_triangle - draft
 *
 * @size: draft
 */
void print_triangle(int size)
{
	int i, j, k, l;

	l = size + 1;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			l--;

			for (j = l; j > 1; j--)
			{
				_putchar(' ');
			}

			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
