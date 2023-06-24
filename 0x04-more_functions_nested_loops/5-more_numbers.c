#include "main.h"
/**
 * more_numbers - function that prints numbers from zero to 14, 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)  /* If the number is two digits */
			_putchar('0' + a / 10); /* Print the tens digit */
			_putchar('0' + a % 10); /* Print the ones digit */
		}
	_putchar('\n');
	}
}
