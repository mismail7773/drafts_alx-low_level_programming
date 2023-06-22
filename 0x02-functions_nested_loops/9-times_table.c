#include "main.h"

/**
 * times_table - draft
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			k = i * j;

			_putchar(',');
			if (k <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
			if (k > 9)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else
			{
				_putchar('0' + k);
			}
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
