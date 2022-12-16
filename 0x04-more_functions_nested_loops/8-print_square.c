#include "main.h"
/**
 * print_square-prints a square
 * @size: the width and lenght
 * Return: square '#'
 */
void print_square(int size)
{
	int len, wid;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len < size; len++)
		{
			_putchar('#');
			for (wid = 2; wid <= size; wid++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
