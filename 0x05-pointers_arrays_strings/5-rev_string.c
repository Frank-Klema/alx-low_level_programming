#include "main.h"

/**
 * rev_string - reverse a string
 * @s: is a pointer to char
 */

void rev_string(char *s)
{
	char a;
	int i = 0, j = 0, half;

	while (*(s + i))
	{
		i++;
	}
	i--;
	half = i / 2;

	while ((*(s + i)) && i > half)
	{
		a = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = a;
		i--;
		j++;
	}
}
