#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints the lowercase alphabet in reverse,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{ putchar(letter); }
	putchar('\n');
	return (0);
}
