#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 *
 * @ac: The number of arguments.
 * @av: An array of strings representing the arguments.
 *
 * Return: On success, returns a pointer
 *         returns NULL. If memory allocation fails, returns NULL.
 *
 * Note: The returned
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *result;
	int total_length;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	k = 0;


	/* Calculate the total length needed for the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++; /* For the '\n' after each argument */
	}

	/* Allocate memory for the concatenated string */
	result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	/* Copy the arguments and '\n' to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}

	result[k] = '\0'; /* Add null terminator */

	return (result);
}
