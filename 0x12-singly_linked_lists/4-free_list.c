#include "lists.h"

/**
 * free_list-frees the memory created when creating a new node
 * @head: pointer to the head of the linked list
 *
 * Return: does not return anything
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
