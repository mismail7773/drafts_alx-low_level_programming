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
	j = 0;
	while (*(s + i) != '\0')
	{
		j = i;
		i++;
	}
	if (j != 0)
	{
		return (j + 1);
	}
	else
	{
		return (j);
	}
}
