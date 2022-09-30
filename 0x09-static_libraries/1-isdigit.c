#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @v: value to be checked
 * Return: return 1 if is a digit or 0 if otherwise
 */
int _isdigit(int v)
{
		if (v >= '0' && v <= '9')
		{
		return (1);
		}
		else
		{
		return (0);
		}
}
