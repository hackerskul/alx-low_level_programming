#include "lists.h"
/**
 * dlistint_len - returns the elements in the struct
 * Return: returns the iterated number of times
 * @h: is the node pointer
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
