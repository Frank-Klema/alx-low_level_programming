#include <main.h>

/**
 * _isupper - check for uppercase character
 * @c: receive integer representation of ascii char
 *
 * Return: return 1 if uppercase, otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else return (0);
}
