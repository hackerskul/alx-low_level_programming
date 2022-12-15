#include "main.h"
/**
 * print_sign - does something
 * @n: is the variabl
 *
 * Return: returns 1 
 * returns 0 and prints 0 if n == zero
 * returns -1 and prints - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
