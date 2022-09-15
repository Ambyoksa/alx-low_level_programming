#include "main.h"

/**
 * print_number - function that prints the numbers, from 0 to 9
 * Return: 0
 */

void print_number(void)
{
	int n = 0;

	while (n <= 9)
	{
	_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
