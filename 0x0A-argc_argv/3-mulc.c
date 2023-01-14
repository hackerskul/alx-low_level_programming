#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Number of arguments passed to program.
 * @argv: Array of arguments passed to program.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply_numbers(num1, num2);
	print_result(result);

	return (0);
}

/**
 * multiply_numbers - Multiply two numbers.
 * @num1: First number to multiply.
 * @num2: Second number to multiply.
 *
 * Return: Result of multiplication.
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * print_result - Print result of multiplication.
 * @result: Result of multiplication.
 */
void print_result(int result)
{
	printf("%d\n", result);
}
