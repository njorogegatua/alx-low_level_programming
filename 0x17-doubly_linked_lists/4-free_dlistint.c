#include "lists.h"

/**
 * free_dlistint - freess a list
 * @head: pointer to the hed node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
