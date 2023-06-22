#include "main.h"

/**
 * more_numbers - draft
 */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('0' + i / 10);

			_putchar('0' + i % 10);
		}
	_putchar('\n');
	}
}
