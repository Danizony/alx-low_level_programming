#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum
 * of all data of a linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_lst;

	sum_lst = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_lst = sum_lst + head->n;
			head = head->next;
		}
	}

	return (sum_lst);
}
