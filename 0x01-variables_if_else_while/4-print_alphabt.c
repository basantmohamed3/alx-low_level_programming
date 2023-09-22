#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints the lowercase alphabet
 *              excluding the letters 'e' and 'q', followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
