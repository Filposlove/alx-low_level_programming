#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're value! and peace, you always win");
	printf(",\n I want learn programming for anytime!\n");
}
