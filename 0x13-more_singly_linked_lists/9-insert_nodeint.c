#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @indx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
	unsigned int k;
		listint_t *new;
		listint_t *temp = *head;
			new = malloc(sizeof(listint_t));
		if (!new || !head)
			return (NULL);
		new->n = n;
		new->next = NULL;
		if (indx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
			for (k = 0; temp && i < indx; k++)
		{
			if (k == indx - 1)
			{
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
			else
				temp = temp->next;
		}
			return (NULL);
}
