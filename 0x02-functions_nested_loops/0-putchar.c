#include<unistd.h>
#include"main.h"
/**
 * main - a program that prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
