#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list of type listint_t
 * return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
