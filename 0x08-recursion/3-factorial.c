#include <stdio.h>
#include "main.h"
/**
 *factorial - returns the fuctorial of a given nmbr
 *@n: is the variable that will be used
 *return: nothing
 *Return: the value of the recursion so to be accsesed
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
