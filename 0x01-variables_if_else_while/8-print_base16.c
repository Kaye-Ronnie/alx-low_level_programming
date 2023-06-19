#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char num16;

for (num16 = '0'; num16 <= '9'; num16++)
{
	putchar(num16);
}
for (num16 = 'a'; num16 <= 'f'; num16++)
{
	putchar(num16);
}	
putchar('\n');
return (0);
}
