#include <stdio.h>
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
