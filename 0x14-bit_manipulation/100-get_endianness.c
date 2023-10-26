#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endiann, 1 if little endiana
 */
int get_endianness(void)
{
	int f;
	char *p;

	f = 1;
	p = (char *)&f;
	return (*p);
}
