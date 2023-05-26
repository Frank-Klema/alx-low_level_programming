#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: an integer
 */

void print_diagonal(int n)
{
	int num1, n2;

	if (n > 0)
	{
		for (num1 = 1; num1 <= n; num1++)
		{
			n2 = 1;
			while (n2 < num1)
			{
				_putchar(' ');
				n2++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
