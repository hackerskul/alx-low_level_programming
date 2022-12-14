#include "main.h"
/**
 *_pow_recursion - raises a number to power
 *@x: an integer that will carry the number to be raised to power
 *@y: an integer telling how much to be raised to power
 *Return: returns what is writen there
 *return: returns -1 if int y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
