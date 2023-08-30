#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - prints a string in reverse and adds a newline using
 *recursion
 *
 *@s: pointer that has the address of the string to be printed
 *
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
