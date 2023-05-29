#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is a pointer to char
 */

void puts_half(char *str)
{
        int i = 0, j, half;

        while (*(str + i))
        {
                i++;
        }
        i--;
        half = i / 2;
	j = half;

        while ((*(str + j + 1)))
        {
		_putchar((*(str + j + 1)));
		j++;
	}
}

