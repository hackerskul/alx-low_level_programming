#include "main.h"

/**
 *_strlen_recursion - prints the length of a string using recursion
 *
 *@s: pointer that has the address of the string
 *
 *Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != 0)
	{
		_strlen_recursion(s + 1);
		return (++n);
	}
	return (n);

}
