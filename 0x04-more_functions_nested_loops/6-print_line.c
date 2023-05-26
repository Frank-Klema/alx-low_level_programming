#include "main.h"

/**
 * print_line - draw a straight line by user defined length
 * @n: an integer
 */

void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
