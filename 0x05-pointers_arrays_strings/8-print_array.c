#include "main.h"

/**
 * print_array - print n elements of array
 * @a: pointer to an integer
 * @n: an integer
 */

void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		_putchar(*(a + i));
		i++;
	}
	_putchar('\n');
}
