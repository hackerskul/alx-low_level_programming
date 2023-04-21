#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to the first element
 */
void free_dlistint(dlistint_t *head);
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint *next = current;

		free(current);
		current = next;
	}
}
