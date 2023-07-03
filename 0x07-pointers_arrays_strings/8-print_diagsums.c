#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagaonals
 * @a: The matrix of inetegrs
 * @size: The size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int num, sumA = 0, sumB = 0;

	for (num = 0; num < size; num++)
	{
		sumA += a[num];
		a += size;
	}

	a -= size;

	for (num = 0; num < size; num++)
	{
		sumB += a[num];
		a -= size;
	}

	printf("%d, %d\n", sumA, sumB);
}
