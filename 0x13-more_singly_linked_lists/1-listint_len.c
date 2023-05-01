#include "lists.h"

/**
 * listint_len-a function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to header
 *
 * Return: returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
