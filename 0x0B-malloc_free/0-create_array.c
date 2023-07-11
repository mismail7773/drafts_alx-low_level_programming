#include <stdlib.h>
#include "main.h"

/**
 * create_array - draft
 * @size: draft
 * @c: draft
 * Return: draft
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return ('\0');
	a = malloc(size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}	
	return (a);
}
