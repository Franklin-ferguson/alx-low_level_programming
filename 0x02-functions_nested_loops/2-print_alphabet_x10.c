#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the 10 times lowercase alphabets
 *
 * return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch = 'a';
		int j = 0;

		while (j <= 25)
		{
			_putchar(ch);
			ch++;
			j++;
		}
		_putchar('\n');
		i++;
	}
}
