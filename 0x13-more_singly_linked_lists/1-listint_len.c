#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked listint_t list
 *@h: the listint_t list
 *Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t current = head;
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
