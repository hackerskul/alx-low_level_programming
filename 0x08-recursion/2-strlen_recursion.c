#include "main.h"
/*
 *_strlen_recursion - prints the length of a string
 *@s: is the pointer to the string
 *@i: the counting var
 *return: the value of i
 *Return: the function
 */

int _strlen_recursion(char *s, int i)
{
	if (*s != 0)
	{
		return (_strlen_recursion(s + 1, i + 1));
	}
	return (i);

}
