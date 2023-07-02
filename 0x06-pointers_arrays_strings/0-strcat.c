#include "main.h"

/**
 * _strcat - draft
 * @dest: draft
 * @src: draft
 *
 * Return: draft
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	for (k = 0; k < j; k++)
	{
		dest[i - 1] = src[k];
		i++;
	}
	for (l = i; l = i; )
		dest[l] = '\0';
	return (dest)
}
