#include "main.h"

/**
 * more_numbers - print 0 through 14 ten times
 * @void: no input
 */

void more_numbers(void)
{
	int num, T, U;

	for (num = 0; num <= 14; num++)
	{
		T = num / 10;
		U = num % 10;

		if (num >= 10)
		{
			_putchar(T + 48);
		}
		_putchar(U + 48);
	}
	_putchar('\n');
}
