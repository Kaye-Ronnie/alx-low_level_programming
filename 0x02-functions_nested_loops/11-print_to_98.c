#include "main.h"

#include <stdio.h>

/**
 * Print_to_98 - prints all naturl numbers from n to 98
 * @num: the number starts from
 * return: always 0
 */
void print_to_98(int num)
{
	if (num <= 98)
	{
	for (; num <= 98; num++)
	{
		if (num == 98)
		{
			printf("%d", num);
			printf("\n");
			break;
		}
		else
		{
			printf("%d, ", num);
		}
	}
	}
	else
	{
		for (; num >= 98; num--)
		{
			if (num == 98)
			{
				printf("%d", num);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", num);
			}
		}
	}
}
