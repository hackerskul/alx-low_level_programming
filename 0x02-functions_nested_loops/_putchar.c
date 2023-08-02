#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

int main(void)
{
	_putchar('a');
	_putchar('b');
	_putchar('c');
	_putchar('d');
	_putchar('e');
	_putchar('f');
	_putchar('g');
	_putchar('h');
	_putchar('i');
	_putchar('j');
	_putchar('k');
	_putchar('l');
	_putchar('m');
	_putchar('n');
	_putchar('o');
	_putchar('p');
	_putchar('q');
	_putchar('r');
	_putchar('s');
	_putchar('t');
	_putchar('u');
	_putchar('v');
	_putchar('w');
	_putchar('x');
	_putchar('y');
	_putchar('z');

	return (0);
}
