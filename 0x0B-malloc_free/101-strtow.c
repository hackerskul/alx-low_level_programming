#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 *
 * @str: The input string to be split.
 *
 * Return: On success, returns a pointer 
 *         to an array of strings (words), 
 *         each containing a single word, 
 *         null-terminated. The last element 
 *         of the returned array should be NULL. 
 *         Returns NULL if str is NULL or empty.
 *
 * Note: The returned pointer points to memory 
 *       that has been dynamically allocated and 
 *       should be freed by the caller to avoid 
 *       memory leaks.
 */
char **strtow(char *str)
{
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	char **words;

	word_count = 0;
	len = 0;

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	/* Allocate memory for the array of words */
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Extract words and store them in the array */
	for (i = 0, j = 0; j < word_count; j++)
	{
		while (str[i] == ' ')
			i++;
		for (len = 0; str[i + len] != ' ' && str[i + len] != '\0'; len++)
			;
		words[j] = (char *)malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
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

