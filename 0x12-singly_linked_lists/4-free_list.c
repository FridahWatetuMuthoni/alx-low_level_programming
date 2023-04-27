#include "lists.h"

/**
 * free_list-frees the memory created when creating a new node
 * @head: pointer to the head of the linked list
 *
 * Return: does not return anything
 */

void free_list(list_t *head)
{
	list_t *next_ptr;

	while (head != NULL)
	{
		next_ptr = head->next;
		free(head->str);
		free(head);
		head = next_ptr;
	}
}
