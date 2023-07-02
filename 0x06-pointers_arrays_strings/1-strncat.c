#include "main.h"

/**
 * _strncat - draft
 * @dest: draft
 * @src: draft
 * @n: draft
 *
 * Return: draft
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[0] != '\0')
		i++;
	for (j = 0; j <= n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
