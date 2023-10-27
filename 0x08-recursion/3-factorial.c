#include <stdio.h>
#include "main.h"
/**
 * factorial - provides the factorial of a number
 * @n: the number whose factorial is being computed.
 * Return: The factorial of n, or -1 in case of a negative input.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
