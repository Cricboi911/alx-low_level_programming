#include "lists.h"

/**
 * print_listint - print list of d element of structure
 * @h: param h
 * Return: size_t struct
 */

size_t print_listint(const listint_t *h)
{
	size_t l_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		l_node++;
	}
	return (l_node);
}
