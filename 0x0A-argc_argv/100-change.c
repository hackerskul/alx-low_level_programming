#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins for change
 *
 * @argc: The number of command-line arguments (should be 2).
 * @argv: The second argument (argv[1])
 *        represents the amount of money in cents.
 *
 * Return: successful returns 0. arguments not exactly 1,
 *         prints "error" and returns 1 if negative
 *         prints 0 and returns 0.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", numCoins);
	return (0);
}

