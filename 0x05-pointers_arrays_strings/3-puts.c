#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a pointer to char
 */

void _puts(char *str)
{
	int i;

	while (*(str + i))
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
