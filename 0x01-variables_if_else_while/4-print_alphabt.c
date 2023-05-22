#include <stdio.h>

/**
 * main - print lowercase letters except q and e
 * @void: no input
 *
 * Return: returns 0
 */

int main(void)
{
	int alph = 'a';

	while (alph >= 'a' && alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');

	return (0);
}
