#include "main.h"

/**
 * main - print _putchar
 * @void: no input
 *
 * Return: return 0 on success
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i++]);
	}
	_putchar('\n');

	return (0);
}
