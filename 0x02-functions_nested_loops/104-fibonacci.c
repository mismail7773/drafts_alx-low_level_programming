#include <stdio.h>

/**
 * main - draft
 *
 * Return: draft
 */
int main(void)
{
	unsigned long old, new, sum;
	int i;

	old = 1;
	new = 2;
	for (i = 1; i <= 98; i++)
	{
		sum = old + new;
		old = new;
		new = sum;
		printf("%lu", sum);
		if (i != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
