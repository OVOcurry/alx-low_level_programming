#include "lists.h"

/**
 * get_nodeint_at_index - Return the node in a linked list at a certain index
 * @head: linked list first node
 * @index: node index to return
 *
 * Return: pointer to the wanted node or Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
