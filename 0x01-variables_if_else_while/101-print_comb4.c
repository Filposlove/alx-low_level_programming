#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, o, s;

	for (n = 48; n < 58; n++)
	{
		for (o = 49; o < 58; o++)
		{
			for (s = 50; s < 58; s++)
			{
				if (s > o && o > n)
				{
					putchar(n);
					putchar(o);
					putchar(s);
					if (n != 55 || o != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
