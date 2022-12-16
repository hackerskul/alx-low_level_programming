#include "main.h"
/**
 * print_line - main entry point
 * @n: the main variable
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_' * n);
	}
	else
	{
		_putchar('\n');
	}
}
