#include "dog.h"
#include <stdio.h>

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (h != NULL)
	{
		count++;
		ptr = ptr->next

	}
	return(count);
}
