#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the keygen of crackme5
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", argv[1]);
	return (0);
}
