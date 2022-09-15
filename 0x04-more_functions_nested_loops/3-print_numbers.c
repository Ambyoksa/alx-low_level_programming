#include "main.h"

/**
 * print_number - function that prints the numbers, from 0 to 9
 * Return: 0
 */

void print_number(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
