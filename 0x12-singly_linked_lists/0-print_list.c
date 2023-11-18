#include <stdio.h>
#include "lists.h"

/**
 * print_list - points all the elements of a linked list
 * @h: pointer to the next list_t list to print
 *
 * Return: the pointer of the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
