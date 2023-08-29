#include "lists.h"

/**
 * pop_;istint - Function delete linked list head node
 * @head: pointer to the linked list first element
 *
 * Return: element that was deleted data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
