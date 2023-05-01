#include "lists.h"

/**
 * free_listint2-a function that frees a listint_t list
 * the function sets the head to NULL
 * @head: the pointer to the pointer to the head node
 *
 * Return: does not return anything
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_ptr = (*head)->next;
		free(*head);
		*head = temp_ptr;
	}

	*head = NULL;
}
