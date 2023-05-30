#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is an integer
 *
 * Return: return c is a letter
 * otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && <= 90))
	{
		return (c);
	}
	else
		return (0);
}
