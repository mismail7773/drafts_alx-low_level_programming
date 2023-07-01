#include "main.h"

/**
 * _strlen - draft
 * @s: draft
 */
int _strlen(char *s)
{
	char *n, *m;

	n = s;
	
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		m = s;
		i++;
	}
	j = m + 1 - n;
	return (j);
}
