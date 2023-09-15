#include <stdio.h>
#include "main.h"

/**
 * main - determine n is positive or negative.
 *
 * Return: 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero")
	return (0);
}
