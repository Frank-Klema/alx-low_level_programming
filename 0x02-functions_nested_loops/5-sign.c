#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: is an integer
 *
 * Return: return 1, 0 or -1 if n > 0, n == 0 or n < 0
 * respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
