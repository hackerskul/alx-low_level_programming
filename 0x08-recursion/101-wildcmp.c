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
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the characters match, continue to the next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		/* Skip the consecutive '*' characters in s2 */
		while (*(s2 + 1) == '*')
			s2++;

		if (*s1 == *(s2 + 1))
			return (wildcmp(s1, s2 + 2) || wildcmp(s1 + 1, s2));
	}

	return (0); /* If no matches are found, the strings are not identical */
}
