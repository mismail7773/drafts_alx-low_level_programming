#include "main.h"
#include <stdlib.h>

/**
 * str_concat - draft
 * @s1: draft
 * @s2: draft
 * Return: draft
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	s3 = malloc(sizeof(char) * ((i) + (1 + j)));
	if (s3 == NULL)
		return (NULL);
	l = i;
	k = l + j;
	for (; i >= 0; --i)
		s3[i] = s1[i];
	for (; k >= l; k--, j--)
		s3[k] = s2[j];
	return (s3);
}
