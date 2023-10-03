#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - string given as a parameter.
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *z;
	int i, f = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	z = malloc(sizeof(char) * (i + 1));

	if (z == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		z[f] = str[f];

	return (z);
}
