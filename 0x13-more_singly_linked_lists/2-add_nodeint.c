#include "lists.h"

/**
 * add_nodeint - Add new node at the start of a linked list
 * @head: List first node pointer
 * @n: New node data to be inserted
 *
 * Return: pointer to the new node on success or Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
