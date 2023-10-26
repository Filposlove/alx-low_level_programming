#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g, setbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (g = 33; g >= 0; g--)
	{
		current = exclusive >> g;
		if (current & 1)
			setbit++;
	}

	return (setbit);
}
