#include "lists.h"

/**
 * get_nodeint_at_index-the function returns the nth node of the linked list
 * @head:pointer to header
 * @index:index of the node that we want returned
 *
 * Return: returns a pointer of the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;

	if (head == NULL)
		return (NULL);

	len = 0;
	while (head)
	{
		if (len == index)
			return (head);
		len++;
		head = head->next;
	}

	return (0);
}
