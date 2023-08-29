#include "lists.h"

/**
 * print_listint - Prints all linked list elments
 * @h: Type listint_t linked list to print
 *
 * Return: Nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
