#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabets
 *in lower case followed by a new line
 *and then in upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character == 'e' || character == 'q')
		{
		}
		else
		{
			putchar(character);
		}
		character++;
	}
	putchar('\n');
	return (0);
}
