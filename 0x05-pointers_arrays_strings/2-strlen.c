#include "main.h"

/**
 * _strlen - draft
 * @s: draft
 *
 * Return: draft
 */
int _strlen(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = i;
		i++;
	}
	return (j);
}
