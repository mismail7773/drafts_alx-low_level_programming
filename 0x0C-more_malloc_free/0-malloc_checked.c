#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - draft
 * @b: draft
 * Return: draft
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
