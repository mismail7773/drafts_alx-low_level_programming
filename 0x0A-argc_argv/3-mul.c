#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - draft
 * @argc: draft
 * @argv: draft
 * Return: draft
 */
int main(int argc, char *argv[])
{
	if (atoi(*(argv + 2)) == '\0' || atoi(*(argv + 1)) == '\0' || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
