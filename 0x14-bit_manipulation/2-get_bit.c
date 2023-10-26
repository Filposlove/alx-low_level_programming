#include"main.h"

/**
 * get_bit - prog returns the value of a bit at a given index.
 * @n:to check bits in
 * @index: index at which to check bit
 *
 * Return: value bit, or -1 there error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hung, check;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);
	hung = 1 << index;
	check = n & hung;
	if (check == hung)
		return (1);
	return (0);
}
