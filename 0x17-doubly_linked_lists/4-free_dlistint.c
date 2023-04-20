#include "lists.h"
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
