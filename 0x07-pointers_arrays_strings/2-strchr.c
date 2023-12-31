#include "main.h"
#include <stdio.h>
/**
 * *_strchr - a function that locates a character in a string.
 * @s: the string of memory
 * @c: the character of memory
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
