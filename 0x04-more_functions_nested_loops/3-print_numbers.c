#include "main.h"

/**
 * _putchar - unction that prints the numbers, from 0 to 9
 * @n: umbers to be printed
 * Return: numbers 0 to 9
 */

void _putchar(int n)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(0, n++);
	}
	else
	{
		_putchar('\n');
	}
}
