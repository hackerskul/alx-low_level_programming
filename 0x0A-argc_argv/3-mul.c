#include <stdio.h>
#include <stdlib.h>
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
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
