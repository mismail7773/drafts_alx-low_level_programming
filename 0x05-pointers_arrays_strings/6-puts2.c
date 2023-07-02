#include "main.h"

/**
 * puts2 - draft
 * @str: draft
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= (i - 1); j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

