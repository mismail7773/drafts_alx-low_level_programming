#include "main.h"

/**
 * is_palindrome0 - draft
 * @s: draft
 * @i: draft
 * @j: draft
 * @k : draft
 * Return: draft
 */
int is_palindrome0(char *s, int i, int j)
{
	if (s[i] == s[j] && s[j] != '\0')
	{
		return (1 + is_palindrome0(s, --i, ++j));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome1 - draft
 * @s: draft
 * Return: draft
 */
int is_palindrome1(char *s)
{
	if (*s != '\0')
	{
		return (1 + is_palindrome1(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - draft
 * @s: draft
 * Return: draft
 */
int is_palindrome(char *s)
{
	int i, j, k, m;

	i = is_palindrome1(s);
	if (i == 0)
		return (1);
	j = 0;
	k = i;
	i--;	
	m = (is_palindrome0(s, i, j));
	if (m == k)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
