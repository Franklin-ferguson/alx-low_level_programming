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
	char CharacterCaps = 'A';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	while (CharacterCaps <= 'Z')
	{
		putchar(CharacterCaps);
		CharacterCaps++;
	}
	putchar('\n');
	return (0);
}
