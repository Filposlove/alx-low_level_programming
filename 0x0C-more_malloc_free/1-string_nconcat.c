#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to oppend to 
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, f = 0, buy1 = 0, buy2 = 0;

	while (s1 && s1[buy1])
		buy1++;
	while (s2 && s2[buy2])
		buy2++;

	if (n < buy2)
		s = malloc(sizeof(char) * (buy1 + n + 1));
	else
		s = malloc(sizeof(char) * (buy1 + buy2 + 1));

	if (!s)
		return (NULL);

	while (i < buy1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < buy2 && i < (buy1 + n))
		s[i++] = s2[f++];

	while (n >= buy2 && i < (buy1 + buy2))
		s[i++] = s2[f++];

	s[i] = '\0';

	return (s);
}
