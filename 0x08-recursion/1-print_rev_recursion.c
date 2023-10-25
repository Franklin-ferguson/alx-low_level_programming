#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in a reverse
 * @s: the input string
 * return: always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

