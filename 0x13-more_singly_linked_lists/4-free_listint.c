#include "lists.h"

/**
 * free_listint - freeing the allocated memories
 * @head: start of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
