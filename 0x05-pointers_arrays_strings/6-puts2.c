#include "main.h"

/**
 * puts2 - prints every other char of a string
 * followed by a new line
 * @str: a pointer to char
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}

