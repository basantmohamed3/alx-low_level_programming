#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints all possible combinations
 * of single-digit numbers separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
