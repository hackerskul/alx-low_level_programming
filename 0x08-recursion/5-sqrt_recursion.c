#include <stdio.h>
#include "main.h"
/**
 *sqrt_recursion - calculates the square root
 *@n: integer for the nmbr
 *@guess: also an int
 *Return: returns
 *return: also returns
 */
int sqrt_recursion(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_recursion(n, (n / guess + guess) / 2));
}
