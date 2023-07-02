#include "main.h"

/**
 * rev_string - draft
 * @s: draft
 */
void rev_string(char *s)
{
	int i, j, k;
	char a, b;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	k = 0;
	for (; j > k; j--)
	{
		a = s[k];
		b = s[j];
		s[k] = b;
		s[j] = a;
		k++;
	}
}
