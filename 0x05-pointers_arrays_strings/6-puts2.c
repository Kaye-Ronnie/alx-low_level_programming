#include "main.h"
/**
 * puts2 - func that prints 1 char/2 of a string, followed by a new line.
 * @str: declaration of str and paramters for the function puts2
 * Return: Always 0.
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
