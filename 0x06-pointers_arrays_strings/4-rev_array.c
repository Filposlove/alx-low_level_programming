#include "main.h"
#include <stdio.h>
/**
 * reverse_array - content of an array of integers.
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;


	i = 0;
	while (n < 0)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
