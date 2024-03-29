#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the
 * end of a dlistint_t list
 *
 * @head: head of list
 * @n: value of element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	t = *head;

	if (t != NULL)
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = t;

	return (new);
}
