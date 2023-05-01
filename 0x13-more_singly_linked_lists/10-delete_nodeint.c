#include "lists.h"

/**
 * delete_nodeint_at_index- deletes a node at a given position
 * @head: pointer to a pointer to a head node
 * @index: position where we are deleting the node
 *
 * Return: returns 1 if we succceed and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
