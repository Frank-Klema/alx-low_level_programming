#include "main.h"

/**
 * _strcpy - copy string to buffer
 * @dest: a pointer to char
 * @src: pointer to char
 *
 * Return: pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);

	return (dest);
}
