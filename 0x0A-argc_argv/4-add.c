#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isalpha(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	num1 = atoi(argv[1]);

	for (i = 2; i < argc; i++)
	{
		num1 += atoi(argv[i]);
	}
	printf("%d\n", num1);
	return (0);
}
