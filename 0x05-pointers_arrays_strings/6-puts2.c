#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: string parameter input
 * Return: Nothing
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
