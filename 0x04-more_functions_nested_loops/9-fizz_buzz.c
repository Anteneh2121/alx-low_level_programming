#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 5) == 0 && (i % 3) == 0)
printf("FizzBuzz");
else if ((i % 5) == 0)
printf("Buzz");
else if ((i % 3) == 0)
printf("Fizz");
else
printf("%d", i);
printf("%s", i < 100 ? " " : "");
}
printf("\n");

return (0);
}
