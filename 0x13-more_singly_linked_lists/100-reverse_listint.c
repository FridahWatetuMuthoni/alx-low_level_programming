#include "lists.h"

/**
 * reverse_listint-reversing a linked list
 * @head:pointer to thepointer node
 *
 * Return: returns a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
