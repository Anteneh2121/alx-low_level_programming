#include "3-calc.h"
#include <stdlib.h>
/**
 *op_add - add a & b.
 *@a: integer value.
 *@b: integer value.
 *
 *Return: sum of a & b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *op_sub - subtraction a & b.
 *@a: integer value.
 *@b: integer value.
 *
 *Return: subtraction result of a & b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - multiplication a & b.
 *@a: integer value.
 *@b: integer value.
 *
 *Return: multiplication result of a & b.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - division a & b.
 *@a: integer value.
 *@b: integer value.
 *
 *Return: divided result of a & b.
 */
int op_div(int a, int b)
{
if (!b)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 *op_mod -modulo of a & b.
 *@a: integer value.
 *@b: integer value.
 *
 *Return: mod result of a & b.
 */
int op_mod(int a, int b)
{
if (!b)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
