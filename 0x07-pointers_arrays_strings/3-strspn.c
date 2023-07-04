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
	int i, j, k, l;

	k = 0;
	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		k++;
		if (k - l == 1)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					l++;
					break;
				}
			}
		}
		else
		{
			break;
		}
	}
	return (l);
}
