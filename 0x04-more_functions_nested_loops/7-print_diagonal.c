#include "main.h"

/**
  * print_diagonal - prints diagnoal nmbrs
  * @n: input variable
  * Return:diagnl
  */
void print_diagonal(int n)
{
	int c;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (s = 0; s < c; s++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
