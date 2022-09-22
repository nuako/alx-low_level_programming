#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: function uses _putchar function to print
 *              10 times the alphabet, in lowercase, followed by a new line.
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	char j;
	
	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
