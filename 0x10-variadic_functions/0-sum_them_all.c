#include "variadic_functions.h"

/**
 * sum_them_all -entry point
 * @n: number arguments
 * Return: total addition
 */
int sum_them_all(const unsigned int n, ...)
{
/* Asigned pointer to get arguments */
va_list arg_p;
/* Count number arguments */
unsigned int count = 0;
/* Store add of arguments */
int add = 0;

if (n == 0)
return (0);
/* Start arguments and num arguments */
va_start(arg_p, n);
/* Loop to go through a pointer adding arguments */
for (count = 0; count < n; count++)
/* Add arguments */
add += va_arg(arg_p, int);
/* Free va_arg */
va_end(arg_p);
/* variable add */
return (add);
}
