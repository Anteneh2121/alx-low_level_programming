#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet - prints out alphabet in lowercase followed by new line
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar(10);
return (0);
}
