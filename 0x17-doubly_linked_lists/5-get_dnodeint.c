#include "lists.h"
#include <stdlib.h>


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
