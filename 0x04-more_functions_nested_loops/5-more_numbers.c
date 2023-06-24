#include "main.h"
/**
 * more_numbers - function that prints numbers from zero to 14, 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int n, t;

	for (t = 0; t <= 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar('t');
				_putchar(n % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
