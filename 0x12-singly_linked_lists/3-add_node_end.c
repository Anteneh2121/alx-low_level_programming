#include "lists.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: character value.
 *
 *Return: i value
 */
int _strlen(const char *s)
{
int i;

for (i = 0; s[i] != 0; i++)
;
return (i);
}
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head:pointer so struct.
 * @str: string pointer.
 *
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = (list_t *) malloc(sizeof(list_t));
list_t *end = *head;

if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;
if (*head == NULL)
(*head) = new;
else
{
while (end->next != NULL)
end = end->next;
}
if (end)
end->next = new;
return (new);
}
