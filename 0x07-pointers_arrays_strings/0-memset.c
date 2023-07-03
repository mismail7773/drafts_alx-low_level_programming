#include "main.h"

/**
 * _memset - draft
 * @s: draft
 * @b: draft
 * @n: draft
 *
 * Return: draft
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}
