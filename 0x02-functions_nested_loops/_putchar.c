#include "main.h"
#include <unistd.h>

/**
* _putchar - writes bla
* @c: the char to print
*
* Return: always 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet_x10(void)
{
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
	_putchar("abcdefghijklmnopqrstuvwxyz")
}
