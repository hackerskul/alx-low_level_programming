#include <stdio.h>
#include "main.h"
/*
 *_print_rev_recursion - prints string in reverse
 *
 *@s: is the string
 *
 *return: nothing
 */
void _print_rev_recursion(char *s)
{
	char *rev;

	rev = s;
	if (*rev != 0)
	{
		_print_rev_recursion(rev + 1);
		_putchar(*s);
	}
}
