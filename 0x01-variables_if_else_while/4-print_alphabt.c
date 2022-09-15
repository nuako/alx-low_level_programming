#include<stdio.h>
/**
 * main - Prints alphabets in lower case except e and q
 *
 * Return: Always0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
