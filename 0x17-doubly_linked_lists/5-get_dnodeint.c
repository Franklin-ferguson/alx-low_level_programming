#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nth_node = head;

	while (nth_node && i != index)
	{
		i++;
		nth_node = nth_node->next;
	}
	if (nth_node && i == index)
		return (nth_node);
	return (NULL);
}
