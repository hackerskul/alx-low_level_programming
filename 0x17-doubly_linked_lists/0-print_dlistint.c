#include <stdio.h>
/**
 *print_dlistint - is a func for printing total nodes
 *@h: is a pointer to the first node of the list
 *Return: the total nodes
 */
size_t print_dlistint(const dlistint *h)
{
	const *current = h;
	size_t nmbr = 0;

	while (current != Null)
	{
		current = current->next;
		nmbr++;
	}

	return (nmbr);
}
