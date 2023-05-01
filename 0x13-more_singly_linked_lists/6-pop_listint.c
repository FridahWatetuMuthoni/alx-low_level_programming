#include "lists.h"

/**
 * pop_listint- deletes the head node of a linked list
 * @head: pointer to pinter of the header
 *
 * Return: retursn the value of the deleted node else 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = temp;

	return (value);
}
