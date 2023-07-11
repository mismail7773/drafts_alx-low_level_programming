#include "main.h"
#include <stdlib.h>

/**
 * _strdup - draft
 * @str: draft
 * Return: draft
 */
char *_strdup(char *str)
{
	char *a;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (; i >= 0; i--)
		a[i] = str[i];
	return (a);
}
