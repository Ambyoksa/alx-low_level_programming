#include "main.h"

/**
 * _pow_recursion - function that raise to power
 * @x: integer function
 * @y: another integer
 * Return: value raised
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
