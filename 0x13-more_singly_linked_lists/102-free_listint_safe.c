#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 *
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: This function frees a linked list using a loop, ensuring that
 * each node is properly deallocated. It also sets the head to NULL to avoid
 * any potential dangling pointers.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size;
	listint_t *current, *temp;

	size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		if (current <= current->next)
		{
			/* Cycle detected, set head to NULL and return */
			*h = NULL;
			return (size);
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	/* Set head to NULL after freeing the list */
	*h = NULL;

	return (size);
}
