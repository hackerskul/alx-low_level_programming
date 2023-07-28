#include "lists.h"

size_t print_list(const list_t *h);
{
	list_t *current = head;

	size_t i = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] (%s)", current->len, current->str);
		}

		i++;
		current = current->next;
	}
}
