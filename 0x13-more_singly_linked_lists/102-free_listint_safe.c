#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	if (h == NULL || *h == NULL)
		return (0);

	size_t size = 0;
	listint_t *current, *next;

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		size++;

		if ((void *)next >= (void *)current)
		{
			printf("Infinite loop detected, list is not freed entirely.\n");
			*h = NULL;
			return (size);
		}

		current = next;
	}

	*h = NULL;
	return (size);
}
