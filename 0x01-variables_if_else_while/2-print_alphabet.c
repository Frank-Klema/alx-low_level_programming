#include <stdio.h>

/**
 * main - print lower letters of the alphabet
 * @void: no input
 *
 * Return: returns 0
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet >= 'a' && alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
