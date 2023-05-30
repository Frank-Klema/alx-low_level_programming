#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: is an integer
 *
 * Return: return 1 if c is lowercase
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
