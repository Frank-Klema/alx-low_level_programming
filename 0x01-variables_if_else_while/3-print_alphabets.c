#include <stdio.h>
/**
 * main - print lower and capital case letters
 * @void: no input
 *
 * Return: returns 0
 */

int main(void)
{
	int alphABET;

	alphABET = 'a';
	while (alphABET >= 'a' && alphABET <= 'z')
	{
		putchar(alphABET);
		alphABET++;
	}

	alphABET = 'A';
	while (alphABET >= 'A' && alphABET <= 'Z')
	{
		putchar(alphABET);
		alphABET++;
	}
	putchar('\n');

	return (0);
}
