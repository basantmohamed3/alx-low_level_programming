#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints all single-digit
 * numbers in base 10, starting from 0 and followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;

while (digit < 10)
{
putchar(digit + '0');
digit++;
}

putchar('\n');

return (0);
}
