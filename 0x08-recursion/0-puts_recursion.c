#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		printf("\n");
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
