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

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (i == 0)
		s1 = "";
	if (j == 0)
		s2 = "";
	s3 = malloc(sizeof(char) * ((i) + (1 + j)));
	if (s3 == NULL)
	       return (NULL);	
	l = i;
	k = l + j;
	for (; i >= 0; --i)
		s3[i] = s1[i];
	for (; k >= l; k--)
	{
		s3[k] = s2[j];
		j--;
	}
	return (s3);
}
