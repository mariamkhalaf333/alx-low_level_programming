#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
        int x = 'z';

        while (x >= 'a')
        {
                putchar(x);
                        x--;
        }
        putchar('\n');
        return (0);
}
