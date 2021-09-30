#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - entry point
 * @separator: entry string
 * @n: number arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int count;
char *p_args;

va_start(args, n);

for (count = 0; count < n; count++)
{
p_args = va_arg(args, char *);
if (p_args != NULL)
{
printf("%s", p_args);
if (separator != NULL && count < n - 1)
{
printf("%s", separator);
}
}
else
{
printf("%p", p_args);
if (separator != NULL && count < n - 1)
{
printf("%s", separator);
}
}
}
putchar('\n');
va_end(args);
}
