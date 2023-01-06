#include "main.h"
/**
 *_pow_recursion - raises a number to power
 *@x: an integer that will carry the number to be raised to power
 *@y: an integer telling how much to be raised to power
 *return: returns -1 if int y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
