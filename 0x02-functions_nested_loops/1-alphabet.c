#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase
 * description - prints the alphabets in lower case
 * return: always 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
