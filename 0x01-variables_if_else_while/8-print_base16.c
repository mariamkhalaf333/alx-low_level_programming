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
	int x = 48;

	while (x <= 102)
	{
		putchar(x);
		if (x == 57)
		{
			x += 39;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
