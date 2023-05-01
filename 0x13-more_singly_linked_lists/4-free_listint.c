#include "lists.h"

/**
 * free_listint-frees a linked list
 * @head:pointer to the head node
 *
 * Return: does not return anything
 */

void free_listint(listint_t *head)
{
	listint_t *next_ptr;

	if (head == NULL)
		return;

	while (head)
	{
		next_ptr = head->next;
		free(head);
		head = next_ptr;
	}
}
