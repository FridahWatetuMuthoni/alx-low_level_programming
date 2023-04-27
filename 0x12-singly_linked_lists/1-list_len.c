#include "lists.h"

/**
 * list_len- returns the number of elements in a linked list
 * @h: pointer to the header
 *
 * Return: returns the num number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
