#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int k, p;

	for (k = 0; k < 8; k++)
	{
		for (p = 0; p < 8; p++)
		{
			_putchar(a[k][p]);
		}
		_putchar('\n');
	}
}
