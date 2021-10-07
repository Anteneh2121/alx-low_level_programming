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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head:pointer so struct.
 * @str: string pointer.
 *
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_head = (list_t *) malloc(sizeof(list_t));

if (new_head == NULL)
return (NULL);
new_head->str = strdup(str);
new_head->len = _strlen(str);
new_head->next = (*head);
(*head) = new_head;
return (new_head);
}
