#include <stdio.h>

/**
 * main - print 3-digit combinations
 * @void: no input
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int num = 0;
	int H, T, U;

	for (num = 0; num <= 999; num++)
	{
		H = num / 100;
		T = (num % 100) / 10;
		U = num % 10;

		if ((H != T && T != U) && (H < T && T < U))
		{
			if (num != 12)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(H + 48);
			putchar(T + 48);
			putchar(U + 48);
		}
	}
	putchar('\n');

	return (0);
}
