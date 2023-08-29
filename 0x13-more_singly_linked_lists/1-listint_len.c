#include "lists.h"

/**
 * listint_len - Lists the number of elements in a linked lists
 * @h: Listint_t linked list to traverse
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
