#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of listint_t
 * @head: is the head node
 * @n: is the content of the listint_t
 *
 * Return: Address of the element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = malloc(sizeof(listint_t));

	if (last_node == NULL)
	{
		return (NULL);
	}
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = last_node;
	}
	return (last_node);
}
