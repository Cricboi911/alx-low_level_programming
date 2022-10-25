#include "lists.h"

/**
 * add_nodeint - adding node to the beginning of list
 * @head: beginning of list
 * @n: params of d element
 * Return: size_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = *head;
	*head = new;
	return (*head);
}
