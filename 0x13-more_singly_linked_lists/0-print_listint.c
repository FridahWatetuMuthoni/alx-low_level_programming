#include "lists.h"

/**
 * print_listint-prints all the elements of a listint)t
 * @h: pointer to the header
 *
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
