#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *k, *p;
	size_t bline;

	k = malloc(sizeof(list_t));
	if (k == NULL)
		return (NULL);

	k->str = strdup(str);

	for (bline = 0; str[bliner]; bline++)
		;

	k->len = bline;
	k->next = NULL;
	p = *head;

	if (p == NULL)
	{
		*head = k;
	}
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = k;
	}

	return (*head);
}
