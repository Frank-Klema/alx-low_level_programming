#include "main.h"

/**
 * _strncat - concatenate two strings to the n bytes of src
 * @dest: a pointer to char
 * @src: a pointer to char
 * @n: an integer
 *
 * Return: return a pointer to char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
