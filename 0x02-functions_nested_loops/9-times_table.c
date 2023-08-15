#include"main.h"
/**
  * times_table - Prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			z = j * i;
			if (y == 0)
			{
				_putchar(z + '0');
			}
			if (z < 10  && y != 0)
			{
			_putchar('.');
			_putchar(' ');
			_putchar(' ');
			 _putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
		}

		_putchar('\n');
	}
}
