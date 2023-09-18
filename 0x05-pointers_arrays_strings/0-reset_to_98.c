#inlcude "main.h"
#include <stdio.h>
/**
 * reset_to_98 - parameter and updates the value it points to to 98.
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int n;
	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
