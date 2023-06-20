#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to be checked
 *
 * Return: 1 if c is valid,
 *         0 otherwise
 */
int _isalpha(int c)
{
	int i;
	int j;

	for (i = 65; i <= 122; i++)
	{
		if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122))
		{
			j = 1;
			break;
		}
		else
		{
			j = 0;
		}
	}

	return (j);
}
