#include "lists.h"

/**
 * find_listint_loop -the function finds the loop contained in a linked list.
 * @head:pointer to the head node
 *
 * Return: returns NULL if there isnt a loop else returns the pointer
 * of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tor = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tor == hare)
		{
			tor = head;

			while (tor != hare)
			{
				tor = tor->next;
				hare = hare->next;
			}

			return (tor);
		}

		tor = tor->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
