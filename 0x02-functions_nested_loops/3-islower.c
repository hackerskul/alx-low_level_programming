#include "main.h"
/**
 *  _islower - if a char is lowercase
 * @c: the char
 * Return: 1 if the letter is lowercase 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
