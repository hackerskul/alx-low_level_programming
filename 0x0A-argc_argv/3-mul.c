#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies  nmbrs from program args
 * @argc: keeps count of arguments
 * @argv: pointer to the arguments
 * Return: ncdj
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int x = atoi(argv[1]);

	int y = atoi(argv[2]);

	printf("%d", x * y);

	return (0);
}
