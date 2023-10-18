#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase
 * description - prints the alphabets in lower case
 * return: always 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
