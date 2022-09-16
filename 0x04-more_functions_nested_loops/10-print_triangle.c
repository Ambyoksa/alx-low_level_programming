#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * only use _putchar function to print
 * @size: size of triangle
 * If size is 0 or less, the function should print only a new line
 * use the character # to print the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		{
		_putchar('\n);
		}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
			{
			_putchar(' ');
			}
		for (c = 0; c < a; c++)
			{
			_putchar('#');
			}
			_putchat('\n');
		}

	}
}
