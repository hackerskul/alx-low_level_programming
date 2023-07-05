#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s)
{
	int i = 1;
	if (*s != 0)
	{
		_strlen_recursion(s + 1, i + 1);
		return i;
	}
}
