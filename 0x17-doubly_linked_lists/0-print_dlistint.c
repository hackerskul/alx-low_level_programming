#include <stdio.h>
/**
 *print_dlistint - is a func for printing total nodes
 *@h: is a pointer to the first node of the list
 *Return: the total nodes
 */
size_t print_dlistint(const dlistint *h)
{
	size_t nmbr;

	for (i = 0; h != Null; i++)
	{
		printf("%d\n", h->n);
		h = h->n;
	}
	return (i);
}
