#include "main.h"

/**
 * print_alphabet_10x - print the alphabet in lowercase x10
 * @void: no input
 */

void print_alphabet_x10(void)
{
        int alph = 'a', times = 10;

	for(times = 1; times <= 10; times++)
	{
		while(alph >= 'a' && alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		alph = 'a';
	}
}
