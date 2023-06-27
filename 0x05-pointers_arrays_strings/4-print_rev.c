#include "main.h"
/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int sta = 0;

	while (s[sta])
		sta++;
	while (sta--)
		_putchar(s[sta]);
	_putchar('\n');
}
