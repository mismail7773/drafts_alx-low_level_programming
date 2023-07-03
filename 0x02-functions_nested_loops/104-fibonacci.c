#include <stdio.h>

/**
 * main - draft
 *
 * Return: draft
 */
int main(void)
{
	int i;
	unsigned long old1, old2, new1;
	unsigned long new2, sum1, sum2, sum01, sum02, sum001, sum002;

	old1 = 0;
	old2 = 1;
	new1 = 0;
	new2 = 2;
	printf("1, 2, ");
	for (i = 1; i <= 96; i++)
	{
		sum01 = old1 + new1;
		sum02 = old2 + new2;
		sum001 = sum01;
		sum002 = sum02 / 1000;
		sum1 = sum002 + (sum001);
		sum2 = sum02 % 1000;
		old1 = new1;
		old2 = new2;
		new1 = sum1;
		new2 = sum2;
		if (sum1 == 0)
		{
			printf("%lu", sum2);
		}
		else
		{
			printf("%lu%04lu", sum1, sum2);
		}
		if (i != 96)
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
