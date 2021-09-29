#include "3-calc.h"
/**
 *main - entry point of a program that adds positive numbers..
 *@argc: integer value.
 *@argv: character value.
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
return (0);
}
