#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char word[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');

	return (0);
}
