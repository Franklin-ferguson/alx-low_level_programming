#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the head of the list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *here = head;
	dlistint_t *next_node;

	if (head)
	{
		here = head;
		next_node = head->next;

		while (next_node)
		{
			free(here);
			here = next_node;
			next_node = next_node->next;
		}
		free(here);
	}

}
