#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints the alphabet
 * in lowercase and uppercase, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');
return (0);
}
