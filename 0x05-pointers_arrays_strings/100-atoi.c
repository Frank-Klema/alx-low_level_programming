#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: a pointer to char
 * 
 * Return: return a integer or 0 where no number
 */

int _atoi(char *s)
{
	int i = 0, j, ntive = 0;
	
	while (*(s + i))
	{
		if (*(s + i) == '-')
		{
			ntive++;
		}

		if (*(s + i) >= 0 && *(s + i) <= 0)
		{
			while (*(s + i) >= 0 && *(s + i) <= 9)
			{
				place++;
				i++;
			}
			break
		}
	}
	place--;
	place = place + i;
	
	for (j = i; j <= place; j++)
	{

	}
}
