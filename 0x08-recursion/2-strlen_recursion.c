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
	int n;

	if (*s == '\n')
	{
		return;
	}
	else
	{
		_strlen_recursion(s + 1);
		n = n + 1;
	}
	return (n);

}
