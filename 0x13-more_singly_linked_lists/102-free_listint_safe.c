#include "lists.h"

size_t looped_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_count-the function counts the number of unique nodes
 * in a looped linked list.
 * @head: A pointer to the head node.
 *
 * Return: returns 0 if not loppped elese returns te number of unique nodes
 */

size_t looped_count(listint_t *head)
{
	listint_t *tor, *hare;
	size_t len = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tor == hare)
		{
			tor = head;
			while (tor != hare)
			{
				len++;
				tor = tor->next;
				hare = hare->next;
			}

			tor = tor->next;
			while (tor != hare)
			{
				len++;
				tor = tor->next;
			}

			return (len);
		}

		tor = tor->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - the function frees a listint_t list safely
 * @h: A pointer to the head node
 *
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t len, i;

	len = looped_count(*h);

	if (len == 0)
	{
		for (; h != NULL && *h != NULL; len++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < len; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (len);
}
