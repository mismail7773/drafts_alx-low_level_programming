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
	int i, j, k, l;

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n')
		{
			if (str[i + 1] == '\n')
				continue;
			if (str[i + 1] == '\0')
				break;
			j++;
		}
	}
	s = malloc(j * sizeof(char *));
	if (s == NULL)
		return (NULL);
	k = 0;
	for (; k < j; k++)
	{
		l = 0;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i + 1] == '\0')
				break;
			if (str[i + 1] == '\n')
			{
				continue;
			}
			else
			{
				s[k][l] = str[i];
				l++;
				if (str[i + 1] == '\n')
				{
					s[k][l] = '\n';
					l++;
					break;
				}
			}
		}
	}
	return (s);

}
