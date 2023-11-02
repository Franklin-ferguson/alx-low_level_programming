#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * int _islower - checks if a letter is lower case
 *
 * return: always 1 on lower case and 0 on uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
