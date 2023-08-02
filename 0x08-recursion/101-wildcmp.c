#include "main.h"
/**
 * wildcmp - Compares two strings and checks if they are identical.
 *
 * @s1: The first input string.
 * @s2: The second input string containing the special character '*'.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: both strings are empty, considered identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the characters match, continue to the next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If the special character '*' is encountered in s2 */
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0' || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}

	return (0);
}
