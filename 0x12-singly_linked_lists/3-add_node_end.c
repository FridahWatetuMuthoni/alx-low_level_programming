#include "lists.h"
#include <string.h>

/**
 * _strlen-claculates the length of a string
 * @str: the string
 * Return: returns the length of the string
 */

int _strlen(const char *str)
{
	int len, i;

	len = 0;
	for (i = 0; str[i]; i++)
		len++;
	return (len);
}

/**
 * add_node_end-adding a node at the end of a linked list
 * @head: the pointer to the head of the list_t list
 * @str: the string that we are adding
 *
 * Return: returns the address of the element or null
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *last;
	char *string_dup;
	int len;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	string_dup = strdup(str);
	if (string_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = _strlen(str);

	new_node->str = string_dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
	}

	return (*head);
}
