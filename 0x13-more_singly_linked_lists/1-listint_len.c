#include "lists.h"

/**
 * listint_len - length of the element of the structure
 * @h: param h
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t nelem = 0;

	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
