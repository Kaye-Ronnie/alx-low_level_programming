#include "main.h"
/**
 * leeta - function that encodes a string into 1337.
 * letters a and A are replaced by 4
 * letters e and E are replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L aree replaced by 1
 * @s: pointer to string.
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int str_len, leetcount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	str_len = 0;
	while (s[str_len] != '\0')
	{
		leetcount = 0;
		while (leetcount < 10)
		{
			if (leetLetters[leetcount] == s[str_len])
			{
				s[str_len] = leetNums[leetcount];
			}
			leetcount++;
		}
		str_len++;
	}
	return (s);
}
