#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 *
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The input string to be split.
 *
 * Return: On success, returns a pointer to an array of strings (words).
 *         On failure, returns NULL.
 */
char **strtow(char *str)
{
	int i, j, len, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	/* Allocate memory for the array of words */
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Extract words and store them in the array */
	for (i = 0, j = 0; j < word_count; j++)
	{
		/* Skip leading spaces */
		while (str[i] == ' ')
			i++;

		/* Find the length of the word */
		for (len = 0; str[i + len] != ' ' && str[i + len] != '\0'; len++)
			;

		/* Allocate memory for the word and copy it */
		words[j] = (char *)malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			/* Free memory and return NULL on failure */
			for (i = 0; i < j; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[j], &str[i], len);
		words[j][len] = '\0';

		i += len;
	}

	words[word_count] = NULL; /* Set the last element to NULL */

	return (words);
}

