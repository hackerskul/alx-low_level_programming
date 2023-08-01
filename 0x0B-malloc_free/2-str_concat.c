#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * Return: On success, returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	size_t len_s1, len_s2, total_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + len_s2 + 1;

	result = (char *)malloc(total_len * sizeof(char));
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result + len_s1, s2);

	return (result);
}
