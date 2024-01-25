#include "lists.h"

/*
 * print_dlistint - Prints a doubly linked list of integers
 * @dlistint_t : is the is the list to be printed
 *@h : is the pointer to the head of the list
 *Return : the number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
