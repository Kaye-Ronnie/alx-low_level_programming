#include "main.h"

/**
 * _strspn - returns number of bytes in the initial sengment s
 * @s: for the count action
 * @accept: parameter for char
 * Return: number of bytes;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				bytes++;
				break;
			}
			else if (accept[num + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
