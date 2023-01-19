#include "main.h"

/**
 *_memset -constant byte n amount of times
 *
 *@s: pointer address of the memory to fill
 *@b: constant that will be written in the momory
 *@n: times the byte will be written into the memory
 *
 *Return: address of the memory where thebyte was written
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
