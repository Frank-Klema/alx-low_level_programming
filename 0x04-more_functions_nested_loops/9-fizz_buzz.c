#include <stdio.h>

/**
 * main - print 1 through 100
 * @void: no input
 *
 * Return: return 0 on success
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);

		putchar(' ');
	}
	putchar('\n');

	return (0);
}
