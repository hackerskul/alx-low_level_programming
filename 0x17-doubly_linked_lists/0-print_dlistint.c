#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		cnt++
	}
}