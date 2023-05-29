#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: a pointer to integer
 */

void print_rev(char *s)
{
	int i = 0, j;

	while (*(s + i))
	{
		i++;
	}
	i--;

	for (j = i; j >= 0; j--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
