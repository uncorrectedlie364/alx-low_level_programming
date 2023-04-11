#include "main.h"

/**
 * Factorial-  returns the factorial of a number
 * @n: The number that returns th factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
