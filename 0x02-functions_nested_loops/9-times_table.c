/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar('.');
			putchar(' ');
			z = x * y;

			if (z <= 9)
				_putchar('');
			else
			_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);
		}

		_putchar('\n');
	}
}
