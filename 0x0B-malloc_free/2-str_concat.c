#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: input one longit
 * @s2: input two longit
 * Return: longit of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *longit;
	int i, B;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = B = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[B] != '\0')
		B++;
	longit = malloc(sizeof(char) * (i + B + 1));

	if (longit == NULL)
		return (NULL);
	i = B = 0;
	while (s1[i] != '\0')
	{
		longit[i] = s1[i];
		i++;
	}

	while (s2[B] != '\0')
	{
		longit[i] = s2[B];
		i++, B++;
	}
	longit[i] = '\0';
	return (longit);
}
