#include "main.h"
/**
 * print_square - function that checks for uppercase character.
 * @size: the int for the paramaters of my function
 * Return: 0
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
