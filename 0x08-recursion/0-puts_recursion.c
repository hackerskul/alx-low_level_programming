#include <stdio.h>
#include "main.h"
/*
 * _puts_recursion - prints a string with a newline in recursion
 *
 * @s: the pointer to the address of the string to be printes
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == 10)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
