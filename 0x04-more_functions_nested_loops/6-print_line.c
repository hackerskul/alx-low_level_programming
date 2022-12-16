#include "main.h"
/**
 * print_line - main entry point
 * @n: the main variable
 */
void print_line(int n)
{
	int i;

	for  (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
