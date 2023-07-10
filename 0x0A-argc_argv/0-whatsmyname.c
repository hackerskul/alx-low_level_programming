#include <stdio.h>

/**
 * main - returns the name of the prog
 * @argc: counts
 * @argv: pointer to the name of the counts
 * Return: none
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
