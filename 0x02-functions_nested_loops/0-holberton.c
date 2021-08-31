#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char h[] = "Holberton";
int m;

m = 0;

while (m <= 8)
    {
_putchar(h[m]);
m++;
}
_putchar('\n');
return (0);
}
