#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			unsigned int len = h->len;
			const char *str = h->str;

			while (*str)
			{
				_putchar(*str);
				str++;
				len--;
			}

			_putchar('\n');
		}
		else
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}

		h = h->next;
		node_count++;

	}

	return (node_count);
}
