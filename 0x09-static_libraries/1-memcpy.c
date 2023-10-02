#include "main.h"
/**
 *_memcpy - a function copies memory of the area
 *@dest: memory where is stored then
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int i = n;


	for (; f < i; f++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}
