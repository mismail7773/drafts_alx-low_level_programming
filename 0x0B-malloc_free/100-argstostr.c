#include "main.h"
#include <stdlib.h>

/**
 * argstostr - draft
 * @ac: draft
 * @av: draft
 * Return: draft
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, c, k;

	if (ac == 0)
		return (NULL);
	i = 0;
	c = 0;
	for (; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	s = malloc((c + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
