#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of command-line arguments passed to the program
 * @argc: argument count
 * @argv: pointer to string argc
 * Return: returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
