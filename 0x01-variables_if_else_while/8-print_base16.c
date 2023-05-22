#include <stdio.h>
/**
 * main - print all the numbers in base 16
 * @void: no input
 *
 * Return: returns 0
 */

int main(void)
{
        int hex;

        hex = '0';
        while (hex >= '0' && hex <= '9')
        {
                putchar(hex);
                hex++;
        }

        hex = 'a';
        while (hex >= 'a' && hex <= 'f')
        {
                putchar(hex);
                hex++;
        }
        putchar('\n');

        return (0);
}

