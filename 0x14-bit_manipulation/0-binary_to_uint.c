#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *binary_to_uint - function to count binary nmbrs
 *@b: pointer to the string of binary
 *Return: returns
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nmbr = 0;
	int power = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = strlen(b); i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			nmbr += (b[i] - '0') * (1 << power);
			power++;
		}
		else
		{
			return (0);
		}
	}
	return (nmbr);
}
