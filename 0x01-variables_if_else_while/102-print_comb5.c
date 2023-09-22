#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints all possible combinations
 * of two two-digit numbers, following the specified format.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens_digit1, ones_digit1, tens_digit2, ones_digit2;

for (tens_digit1 = 0; tens_digit1 <= 9; tens_digit1++)
{
for (ones_digit1 = 0; ones_digit1 <= 9; ones_digit1++)
{
for (tens_digit2 = tens_digit1; tens_digit2 <= 9; tens_digit2++)
{
int start_ones_digit = (tens_digit1 == tens_digit2) ? ones_digit1 + 1 : 0;
for (ones_digit2 = start_ones_digit; ones_digit2 <= 9; ones_digit2++)
{
putchar(tens_digit1 + '0');
putchar(ones_digit1 + '0');
putchar(' ');
putchar(tens_digit2 + '0');
putchar(ones_digit2 + '0');

if (!(tens_digit1 == 9 && ones_digit1 == 8 && tens_digit2 == 9 && ones_digit2 == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');

return (0);
}

