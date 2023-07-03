#include "main.h"

/**
 * _strchr - draft
 * @s: draft
 * @c: draft
 *
 * Return: draft
 */
char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
			break;
	}
	return (&s[j]);
}
