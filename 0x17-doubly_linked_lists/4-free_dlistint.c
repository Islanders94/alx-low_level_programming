#include "lists.h"

/**
 * free_dlistint - to free a dlist
 * @head: pointer to the current head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
