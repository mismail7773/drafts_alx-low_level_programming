#include "main.h"

/**
 * _strspn - draft
 * @s: draft
 * @accept: draft
 *
 * Return: draft
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, m, n, o, p;

	i = 0;
	while (s[i] != '\0')
		i++;
	j = 0;
	while (accept[j] != '\0')
		j++;
	for (k = 0; k < j; k++)
	{
		if (s[0] == accept[k])
		{
			n = 0;
			o = 0;
			for (m = 0; m < i; m++)
			{
				o++;
				if ((o - n) == 1)
				{
					for (p = 0; p < j; p++)
					{
						if (s[m] == accept[p])
						{
							n++;
							break;
						}
					}
				}
				else
				{
					break;
				}
			}
		}
		else
		{
			n = 0;
		}
	}
	return (n);
}


