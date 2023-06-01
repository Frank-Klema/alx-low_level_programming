#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: a char
 * @src: a char
 *
 * Return: return a char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	i--;

	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = \0;
			
}
