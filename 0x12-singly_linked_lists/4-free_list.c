#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to struct.
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
