#include "main.h"

/**
 * print_square - draw a diagonal line on the terminal
 * @size: an integer
 */

void print_square(int size)
{
	int width, breadth;

	if (size > 0)
	{
		for (width = 1; width <= size; width++)
		{
			for (breadth = 1; breadth <= size; breadth++)
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

