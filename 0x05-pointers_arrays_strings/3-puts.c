#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: declaration of *str and paramters for the function _puts
 * Return: Always 0.
 */
void _puts(char *str)
{
	int ch;

	while (str[ch])
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
}
