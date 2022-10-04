#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);
	return (0);
}
