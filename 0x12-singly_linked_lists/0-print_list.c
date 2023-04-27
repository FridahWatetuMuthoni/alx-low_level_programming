#include "lists.h"

/**
 * print_list- used to print the elements of a linked list
 * @h: pointer to the header of the linked list
 *
 * Return: the function returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		nodes++;
	}
	return (nodes);
}
