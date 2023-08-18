#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @n: is the number of times the \ character should be printed
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
`	int row, cloumn;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
