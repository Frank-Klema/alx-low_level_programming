#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: a pointer to char
 * @src: a pointer to char
 * @n: an integer
 *
 * Return: return a pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
