#include "main.h"
#include <stdlib.h>
/**
 * argstostr - oncatenates all the arguments of your program.
 * @ac: int input
 * @av: pointer of array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, f = 0, h = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			h++;
	}
	h += ac;

	str = malloc(sizeof(char) * h + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[f] = av[i][n];
		f++;
	}
	if (str[f] == '\0')
	{
		str[f++] = '\n';
	}
	}
	return (str);
}
