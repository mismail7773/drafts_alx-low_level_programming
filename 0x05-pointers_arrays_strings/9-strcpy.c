#include "main.h"

/**
 * _strcpy - draft
 * @dest: drraft
 * @src: draft
 *
 * Return: draft
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j < i - 1; j++)
		dest[j] = src[j];
	dest[j] = src[j];
	return (dest);
}
