#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers
 * @argv: arguments vector
 * @argc: arguments count
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
		{
		printf("Error\n");
			return (1);
		}

		/* mulitply two arguments passed via cmd line */
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
