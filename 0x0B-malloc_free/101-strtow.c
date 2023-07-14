#include "main.h"
#include <stdlib.h>

/**
 * strtow0 - draft
 * @str: draft
 * Return: draft
 */
int strtow0(char *str)
{
	int i, j;

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{	
			if (str[i + 1] == 32)
				j++;
			if (str[i + 1] == 0)
				j++;
		}
	}
	return (j);
}

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
	j = strtow0(str);
	if (j == 0)
		return (NULL);
	s = malloc((j + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	i = 0;
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
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == 0))
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
