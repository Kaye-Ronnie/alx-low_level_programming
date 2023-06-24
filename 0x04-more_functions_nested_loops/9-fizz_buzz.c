#include <stdio.h>
/**
 * main -entry point
 * decription: prints number 1 to 100
 * fizz for multiples of 3 and Buzz for multiples of 5
 * and fizzbuzz for mutiples of both five and three
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{	printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", num);
		}
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
