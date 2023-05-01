#include "lists.h"

/**
 * add_nodeint_end-adds a new node at the end of the linked list
 * @head: pointer to pointer to the head node
 * @n: the value of the data of the node
 *
 * Return: returns the pointer to the created node or null if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		last = *head;

		while (last->next)
		{
			last = last->next;
		}
		last->next = node;
	}

	return (node);
}
