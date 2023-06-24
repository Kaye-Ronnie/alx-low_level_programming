#include "main.h"
/**
 * print_numbers - function that prints numbers from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
_putchar('\n');
}
