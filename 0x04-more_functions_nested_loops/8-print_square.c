#include "main.h"

/**
 * print_square - draw a diagonal line on the terminal
 * @size: an integer
 */

void print_square(int size)
{
	int w, b;

	if (size > 0)
	{
		for (w = 1; w <= size; w++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

