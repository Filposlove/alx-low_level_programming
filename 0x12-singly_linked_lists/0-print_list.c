#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t life;
		life = 0;
	while (h != NULL)
	{
		h = h->next;
		life++;
	}
	return (life);
}
