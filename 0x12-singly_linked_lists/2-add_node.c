#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * add_node - adds a new node at the beginning of a linked list
 * @head : double pointer to the list_t list
 * @str : new string to add in the node
 *
 * Return : the address of the new element or NULL if it fails
 *
 * Description: This function creates a new node and adds it to the beginning
 * of the linked list. The new node contains the provided string and
 * its length. It updates the head pointer to point to the new node
 * and returns the address of the new element. If the allocation of
 * memory fails, it returns NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
