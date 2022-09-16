#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * only use _putchar function to print
 * @size: size of triangle
 * If size is 0 or less, the function should print only a new line
 * use the character # to print the triangle
 * Return: 0
 */
void print_triangle(int size);
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
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
			_putchar(' ');
			}
		for (k = 0; k < i; k++)
			{
			_putchar('#');
			}
			_putchat('\n');
		}

	}
}
