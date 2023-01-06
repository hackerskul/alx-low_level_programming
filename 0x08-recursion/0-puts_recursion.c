#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string with a newline in recursion
 *
 * @s: the pointer to the address of the string to be printes
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	puts_recursion(s + 1);
}


