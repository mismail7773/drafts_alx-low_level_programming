#include "main.h"

/**
 * wildcmp0 - draft
 * @s1: draft
 * @s2: draft
 * @j: draft
 * @k: draft
 * Return: draft
 */
int wildcmp0(char *s1, char *s2, int j, int k)
{
	if (s2[k] == s2[0] && &(s2[k]) == &(s2[0]))
	{
		if (s2[k] == '*')
			return (1);
		if (s2[k] == s1[0] && s2[k + 1] == '*')
			return (1);
		if (s1[j] == s2[k])
			return (1);
		if (s1[j] != s2[k])
			return (0);
	}
	if (s1[j] == s2[k])
		return (1 + wildcmp0(s1, s2, --j, --k));
	if (s1[j] != s2[k])
	{
		if (s2[k] == '*')
			return (1 + wildcmp0(s1, s2, j, --k));
		if (s2[k + 1] == '*')
			return (0 + wildcmp0(s1, s2, --j, k));
		return (0);
	}
	return (2);
}

/**
 * wildcmp1 - draft
 * @s1: draft
 * Return: draft
 */
int wildcmp1(char *s1)
{
	if (*s1 != '\0')
	{
		return (1 + wildcmp1(s1 + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * wildcmp2 - draft
 * @s2: draft
 * Return: draft
 */
int wildcmp2(char *s2)
{
	if (*s2 != '\0')
	{
		return (1 + wildcmp2(s2 + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * wildcmp - draft
 * @s1: draft
 * @s2: draft
 * Return: draft
 */
int wildcmp(char *s1, char *s2)
{
	int j, k, l, m;

	j = wildcmp1(s1);
	k = wildcmp2(s2);
	m = k;
	if (s1[j - 1] == s2[k - 1] || s2[k - 1] == '*')
	{
		if (s1[0] == s2[0] || s2[0] == '*')
			l = wildcmp0(s1, s2, --j, --k);
	}
	else
	{
		return (0);
	}
	if (l == m)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
