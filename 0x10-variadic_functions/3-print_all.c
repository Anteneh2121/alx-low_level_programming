#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - entry va_list like type
 * @c: get va_list
 */
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}
/**
 * print_int - entry va_list like type
 * @i: get va_list
 */
void print_int(va_list i)
{
printf("%i", va_arg(i, int));
}
/**
 * print_float - entry va_list like type
 * @f: get va_list
 */
void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}
/**
 * print_string - entry va_list like type
 * @s: get va_list
 */
void print_string(va_list s)
{
char *str = va_arg(s, char *);

if (str != NULL)
{
printf("%s", str);
return;
}
printf("(nil)");
}
/**
 * print_all - entry arguments
 * @format: get quantity aarguments
 */
void print_all(const char * const format, ...)
{
format_t type[] = {
		     {"c", print_char},
		     {"i", print_int},
		     {"f", print_float},
		     {"s", print_string},
		     {NULL, NULL}
};

va_list args;
int i, j;
char *sp = "";

va_start(args, format);
i = 0;
while (format && format[i])
{
j = 0;
while (j < 4)
{

if (type[j].t[0] == format[i])
{
printf("%s", sp);
type[j].f(args);
sp = ", ";
break;

}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
