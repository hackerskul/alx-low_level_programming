#include "main.h"
/* print_alphabet_x10 - alpahbet printed 10 times
 * main - main entry point
 *
 *
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	int x;

	char la;

	while (x < 10) {
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
	_putchar('\n');

	}
}
