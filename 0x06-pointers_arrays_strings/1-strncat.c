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
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	for (k = 0; k < n && k < j; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
