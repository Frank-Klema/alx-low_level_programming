#include "main.h"

/**
 * print_array - print n elements of array
 * @a: pointer to an integer
 * @n: an integer
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("*(a + i)");
		i++;
	}
	_putchar('\n');
}
