#include "lists.h"

/**
 * add_nodeint-adds a new node at the begining of a linked list
 * @head: pointer to pointer of the head node
 * @n: the data to include in the data part of the list
 *
 * Return: returns pointer to the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
