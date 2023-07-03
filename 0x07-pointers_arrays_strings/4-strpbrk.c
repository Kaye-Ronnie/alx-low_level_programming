#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: for the char
 * @accept: paramter for accept
 * Return: pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
				return (s);
		}

		s++;

	}
return ('\0');
}
