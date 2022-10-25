#include "lists.h"

/**
 * sum_listint - sum of then of each list
 * @head: start of the list
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
