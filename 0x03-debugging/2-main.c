#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: largest
*/

int largest_number(int a, int b, int c)
{
        int largest;

        a = 0;
        b = 0;
        c = 0;

        if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else c:

        printf("%d is the largest number\n", largest);

        return largest;
}
