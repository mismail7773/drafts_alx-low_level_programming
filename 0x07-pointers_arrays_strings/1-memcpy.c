#include "main.h"

/**
 * _memcpy - draft
 * @dest: draft
 * @src: draft
 * @n: draft
 *
 * Return: draft
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
		dest[i]  = src[i];
	return (dest);
}
