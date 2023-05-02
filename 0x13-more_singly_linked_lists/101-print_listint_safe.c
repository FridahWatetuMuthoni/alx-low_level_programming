#include "lists.h"

size_t looped_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_len - calculates the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head node.
 *
 * Return: If the list is not looped it returns 0
 * else number of unique nodes
 */

size_t looped_len(const listint_t *head)
{
	const listint_t *tor, *hare;
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
 * print_listint_safe - the function prints a listint_t list safely.
 * @head: A pointer to the head node.
 *
 * Return:returns number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len, i = 0;

	len = looped_len(head);

	if (len == 0)
	{
		for (; head != NULL; len++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < len; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (len);
}
