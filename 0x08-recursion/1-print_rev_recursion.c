#include <stdio.h>
#include "main.h"

/*
 * _print_rev_recursion - is the reverse function
 * @s: is a pointer to a string to be reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
