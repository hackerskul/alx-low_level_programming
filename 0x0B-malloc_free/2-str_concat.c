#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *str_concat - concatenates two strings
 *
 *@s1: first string
 *@s2: second string
 *
 *Return: a pointer to the concatenated string or NULL if the process fails
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, i_s1, j_s2;

	if (s1 == 0)
	{
		s1 = "";
	}
	for (i = 0; s1[i] != 0; i++)
	{
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (j = 0; s2[j] != 0; i++)
	{
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == 0)
	{
		return (0);
	}

	for (i_s1 = 0; i_s1 < i; i_s1++)
	{
		ptr[i_s1] = s1[i_s1];
	}
	for (j_s2 = 0; j_s2 < j; j_s2++)
	{
		ptr[i_s1] = s2[j_s2];
	}
	ptr[i_s1] = 0;
	return (ptr);
}
