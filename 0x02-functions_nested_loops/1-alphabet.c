#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * @void: no input
 */

void print_alphabet(void)
{
	int alph = 'a';

	while(alph >= 'a' && alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
