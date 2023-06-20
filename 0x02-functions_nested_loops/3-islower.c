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

	for (i = 'a'; i <= 'z'; i++)
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
