#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow, *fast;

    if (head == NULL || head->next == NULL)
        return NULL;

    slow = head;
    fast = head->next;

    while (slow != fast)
    {
        if (fast == NULL || fast->next == NULL)
            return NULL;

        slow = slow->next;
        fast = fast->next->next;
    }

    /* Loop detected, find the start of the loop */
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}
