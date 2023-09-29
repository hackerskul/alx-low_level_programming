#include "binary.h"
#include <stdio.h>
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: string containing the binary number
 *Return: Return the converted number, or 0 if the string has a char other than
 *0 or 1 or if @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (b == NULL)
		return (0);

	for(i = 0; i != '\0'; i++)
	{
		if(b[i] == '0')
			result = result << 1;
		else if(b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}

	return (result);

}
