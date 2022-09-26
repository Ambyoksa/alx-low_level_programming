#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: rings
 * @b: characters
 * @n: numbers set
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
