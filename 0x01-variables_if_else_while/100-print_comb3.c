#include <stdio.h>

/**
 * main - print all different possible combinations
 * of two digits
 * @void: no input
 *
 * Return: return 0
 */

int main(void)
{
	int tens, units;

	for (tens = 0; tens <= 9; tens++)
	{
		for (units = 0; units <= 9; units++)
		{
			if (tens != units && tens < units)
			{
				if (!(tens == 0 && units == 1))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(tens + 48);
				putchar(units + 48);
			}
		}
	}
	putchar('\n');

	return (0);
}
