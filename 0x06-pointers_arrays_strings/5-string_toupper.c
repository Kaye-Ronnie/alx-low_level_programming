#include "main.h"
/**
 * string_toupper - function that changes lowercase to upper case
 * @x: pointer to string
 *
 * Return: pointer to uppercase string
 */
char *string_toupper(char *x)
{
	int len_str;

	len_str = 0;
	while (x[len_str] != '\0')
	{
		if (x[len_str] >= 97 && x[len_str] <= 122)
		{
			x[len_str] = x[len_str] - 32;
		}
		len_str++;
	}
	return (x);
}
