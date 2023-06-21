#include "main.h"

/**
 * jack_bauer - draft
 *
 * Return: draft
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 2; i++)
	{
		_putchar(i + '0');
		_putchar(i + '0');

		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
			_putchar(':');

			for (i = 0; i <= 9; i++)
			{
				_putchar(i + '0');

				for (i = 0; i <= 9; i++)
				{
					_putchar(i + '0');
				}
			}
		}

	}
}
