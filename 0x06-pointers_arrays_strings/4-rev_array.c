#include "main.h"
/**
 * reverse_array - function that reverse the content of anarrayof integers.
 * @a: pointer of array.
 * @n: number of elemnets of an array
 * Retutrn: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;
	
	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
