#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase,
 *         0 otherwise
 */
int _islower(int c)
{
	int i;
	int j;	

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			j = 1;
			break;
		}
		else
		{
			j = 0;
		}
	}

	return j;
}
