#include "main.h"

/**
 *print_listint - prints all the elements of a listint_t list
 *@h: listint_t list to be printed
 *Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t current = head;
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
