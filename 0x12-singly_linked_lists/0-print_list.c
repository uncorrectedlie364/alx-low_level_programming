#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a lined list
 * @h : points to the list_t that is to be printed
 *
 * Return : the number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
