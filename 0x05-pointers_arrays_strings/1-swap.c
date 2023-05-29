#include "main.h"

/**
 * swap_int - swap int values
 * @a: an integer
 * @b: an integer
 */

void swap_int(int *a, int *b)
{
	int* c = *a;

	*a = *b;
	*b = *c;
}
