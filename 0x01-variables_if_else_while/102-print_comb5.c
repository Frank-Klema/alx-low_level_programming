#include <stdio.h>

/**
 * main - print two 2-digit numbers combinations
 * @void: no input
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int num, num1, num2;
	int Th, H, T, U;

	for (num = 0; num <= 9999; num++)
	{
		Th = num / 1000;
		H = (num % 1000) / 100;

		T = (num % 100) / 10;
		U = num % 10;

		num1 = num / 100;
		num2 = num % 100;

		if ((num1 != num2) && (num1 < num2))
		{
			if (num != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(Th + 48);
			putchar(H + 48);
			putchar(' ');
			putchar(T + 48);
			putchar(U + 48);
		}
	}
	putchar('\n');

	return (0);
}
