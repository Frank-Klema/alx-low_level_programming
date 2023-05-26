#include "main.h"

/**
 * print_square - draw a square
 * @size: an integer
 *
 */

void print_square(int size)
{
	int w, b;

	if (size >= 1)
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

