#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m += 1;
	}
	putchar('\n');
	return (0);
}
