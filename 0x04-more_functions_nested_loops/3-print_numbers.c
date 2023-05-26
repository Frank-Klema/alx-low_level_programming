#include "main.h"

/**
 * print_numbers - print number 0 through 9
 * @void: no input
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
