#include <stdio.h>
#include "main.h"
#include "stdlib.h"

/**
 *_strdup -  returns a pointer to a newly allocated space in memory, which
 *contains a copy of the string given as a parameter
 *
 *@str: the string to be copied
 *
 *Return: a pointer to the array or NULL if the process fails
 */
char *_strdup(char *str)
{
	char *ptr;
	int len;
	int i;

	if (str == 0)
	{
		return (0);
	}

	for (len = 0; str[len] != 0; len++)
	{
		len++;
	}

	ptr = (char *)malloc(sizeof(char) * (len + 1));

	if (ptr == 0)
		return (0);

	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
