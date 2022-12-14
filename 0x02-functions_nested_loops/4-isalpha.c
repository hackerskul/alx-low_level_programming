#include "main.h"
/**
 * _isalpha - checking for alphabetic char
 * @c: this is the char i guess
 * Return: return 1 if c is a letter, uppercase or lowercase
 */

int _isalpha(int c)
{
	if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
