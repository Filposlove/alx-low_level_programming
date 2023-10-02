#include "main.h"
/**
 * _memset - block of memory
 * @f: starting address
 * @j: the desired value
 * @n: number of bytes
 *
 * Return: changed array with value of n
 */
char *_memset(char *f, char j, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		f[i] = j;
		n--;
	}
	return (f);
}
