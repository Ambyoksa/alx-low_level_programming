#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers
 * @argv: arguments vector
 * @argc: arguments count
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argc[])
{
	int a, b;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argc[2]);
		printf("%\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
