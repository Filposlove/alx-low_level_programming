#include "main.h"
/**
 * factorial -  factorial of a given number.
 * @n: return a number
 * Return: factorial n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
