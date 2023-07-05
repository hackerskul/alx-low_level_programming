#include <stdio.h>
#include "main.h"

/**
 *factorial - returns the factorial
 *@n: is the variable
 *return: retiurns the factoeial
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n = 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
