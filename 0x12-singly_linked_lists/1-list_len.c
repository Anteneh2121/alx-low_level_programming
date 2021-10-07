#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list.
 * @h:the number of nodes
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
int count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
