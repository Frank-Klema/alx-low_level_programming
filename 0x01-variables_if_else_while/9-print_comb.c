#include <stdio.h>

/**
 * main - all possible combinations of single-digit numbers
 * @void: no input
 *
 * Return: return 0
 */

int main(void)
{
	int combo = '0';

	while (combo >= '0' && combo <= '9')
	{
		putchar(combo);
		if (combo != '9')
		{
			putchar(',');
			putchar(' ');
		}
		combo++;
	}
	putchar('\n');

	return (0);
}
