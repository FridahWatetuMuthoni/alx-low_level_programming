#include "lists.h"

/**
 * insert_nodeint_at_index-inserts a node at a given position
 * @head:pointer to the pointer of the head node
 * @idx:position where the node will be added
 * @n: the value of the node data
 *
 * Return: the function returns the pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 1)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;
	for (i = 0; i < idx - 2; i++)
		temp = temp->next;

	node->next = temp->next;
	temp->next = node;

	return (node);

}
