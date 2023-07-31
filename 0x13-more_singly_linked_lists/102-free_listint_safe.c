#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast;
    size_t count = 0;

    if (h == NULL || *h == NULL)
        return 0;

    slow = *h;
    fast = (*h)->next;

    while (slow && fast && fast->next)
    {
        if (slow == fast)
        {
            /* Loop detected, break the loop */
            slow = *h;
            while (slow != fast->next)
            {
                count++;
                slow = slow->next;
                fast = fast->next;
            }
            count++; /* Count the last node inside the loop */
            while (fast->next != slow)
            {
                count++;
                fast = fast->next;
            }
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    /* No loop, simply free the list and set head to NULL */
    slow = *h;
    while (slow)
    {
        listint_t *temp = slow;
        slow = slow->next;
        free(temp);
        count++;
    }

    *h = NULL; /* Set head to NULL after freeing the list */

    return count;
}
