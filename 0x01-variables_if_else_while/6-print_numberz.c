#include <stdio.h>

/**
 * main - prints all base 10 digits
 *@void: no input
 *
 * Return: return 0
 */

int main(void)
{
	int dgt = '0';

	while (dgt >= '0' && dgt <= '9')
	{
		putchar(dgt);
 		dgt++;
	}
	putchar('\n');

	return (0);
}
