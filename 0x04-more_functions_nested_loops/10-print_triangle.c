#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: the int for the paramaters of my function
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int rw, hs, sp;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rw = 1; rw <= size; rw++)
		{
			for (sp = size - rw; sp >= 1; sp--)
			{
				_putchar(' ');
			}
			for (hs = 1; hs <= rw; hs++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
