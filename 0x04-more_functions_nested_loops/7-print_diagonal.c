#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: an integer
 */

void print_diagonal(int n)
{
	char line = '\\';
	int num1, n2, space = ' ';

	if (n > 0)
	{
		/* loop to print the line dashes*/
		for (num1 = 1; num1 <= n; num1++)
		{
			n2 = 1;
			while (n2 < num1)
			{
				_putchar(space);
				n2++;
			}
			_putchar(line);
			_putchar('\n');
		}
	
	}
	else
	{
		_putchar('\n');
	}
}
