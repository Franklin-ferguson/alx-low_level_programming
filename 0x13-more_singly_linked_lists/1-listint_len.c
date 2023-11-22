#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the number of elements in listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != 0)
	{
		h = h->next;
		n++;
	}
	return (n);
}
