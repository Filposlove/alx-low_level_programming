#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int g;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[n] = src[g];
		n++;
		g++;
	}

	dest[n] = '\0';
	return (dest);
}
