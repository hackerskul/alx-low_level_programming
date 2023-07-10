#include <stdio.h>

/**
 * main - main function
 * @argc: counts the parameters of the prog
 * @argv: pointer to the names of the param
 * Return: none
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}