#include <stdio.h>

/**
 * main - print lower letters of the alphabet
 * @void: no input
 *
 * Return: returns 0
 */

int main(void)
{
        int alphabet = 'z';

        while (alphabet <= 'z' && alphabet >= 'a')
        {
                putchar(alphabet);
                alphabet--;
        }
        putchar('\n');

        return (0);
}
