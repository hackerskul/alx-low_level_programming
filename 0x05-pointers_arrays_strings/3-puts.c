#include "main.h"
/**
 * _puts - prints a string
 * @str: the string in question
 * Return: the length of the string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)

		int i = 0;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++
		}
		_putchar('\n');
}
