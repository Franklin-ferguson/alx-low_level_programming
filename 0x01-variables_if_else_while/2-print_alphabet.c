#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabets  in lower case followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 'a';
	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}

