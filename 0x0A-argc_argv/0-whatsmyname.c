#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the executable
 * @argc: argument count
 * @argv: pointer to string argc
 * Return: returns 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[0][i])
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
