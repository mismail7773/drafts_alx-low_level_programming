#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - draft
 * @argc: draft
 * @argv: draft
 * Return: draft
 */
int main(int argc, char *argv[])
{
	int c25, c10, c5, c2, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi((argv[1])) < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			num = atoi(argv[1]);
			c25 = num / 25;
			num -= c25 * 25;
			c10 = num / 10;
			num -= c10 * 10;
			c5 = num / 5;
			num -= c5 * 5;
			c2 = num / 2;
			num -= c2 * 2;
			printf("%d\n", num + c25 + c10 + c5 + c2);
		}
	}
	return (0);
}
