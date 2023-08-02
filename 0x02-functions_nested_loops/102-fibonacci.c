#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long long int fib1 = 1, fib2 = 2, next_fib;

	printf("%llu, %llu", fib1, fib2);

	for (i = 2; i < 50; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %llu", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");
	return (0);
}
