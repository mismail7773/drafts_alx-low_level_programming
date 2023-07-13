#include "main.h"
#include <stdlib.h>

/**
 * strtow - draft
 * @str: draft
 * Return: draft
 */
char **strtow(char *str)
{
	char **s;
	int i, j, k, l, m, n;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
		return (NULL);
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			j++;
		if (str[i] != ' ' && str[i + 1] == '\0')
			j++;
	}
	s = malloc((j + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	m = 0;
	n = 0;
	for (k = 0; k < j; k++)
	{
		l = 0;
		for (i = m; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
			{
				l++;
			}
			if (str[i] != ' ' && str[i + 1] == ' ')
			{
				s[k] = malloc(sizeof(char) * (l + 1));
				n = l;
				m = i + 1;
				for (; str[i] != ' '; i--)
				{
					s[k][l - 1] = str[i];
					l--;
				}
				s[k][n] = '\0';
				break;
			}

		}
	}
	s[k] = NULL;
	return (s);
}
