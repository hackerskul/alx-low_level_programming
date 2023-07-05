#include <stdio.h>
#include "main.h"

/*
 *_strlen_recursion - function that returns an int
 *Return: increment 
 *@s: pointer variable
 *return: returns i
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i = _strlen_recursion(s + 1);
		return (++i);
	}
	return (i);
}
