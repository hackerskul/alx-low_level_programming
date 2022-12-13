#include "main.h"
/**
 * print_alphabet_x10 - alpahbet printed 10 times
 * main - main entry point
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	int x = 1;
	char la;

	for (x = 1; x <= 10; x++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
