/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len, i;

	len = 0;

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	/* Compare characters from both ends until the middle */
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
			return (0);
	}

	return (1);
}
