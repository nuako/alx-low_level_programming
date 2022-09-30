#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @root:guess at sqrt
 * @num: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int root, int num)
{
	if (root * root == num)
		return (root);
	if (root * root > num)
		return (-1);
	return (sqrt_check(root + 1, num));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
