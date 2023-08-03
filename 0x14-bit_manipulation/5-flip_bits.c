#include "main.h"

/**
 * flip_bits - counts the value of bits to change
 * to get from one value to another
 * @n: first value
 * @m: second value
 *
 * Return: value of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, cnt = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			cnt++;
	}

	return (cnt);
}
