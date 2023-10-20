#include "100-operations.h"

/*
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the addition.
 */

int add(int a, int b)
{
	return (a + b);
}

/*
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction.
 */

int sub(int a, int b)
{
	return (a - b);
}

/*
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication.
 */

int mul(int a, int b)
{
	return (a * b);
}

/*
 * div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the division, or 0 if b is 0.
 */

int div(int a, int b)
{
	if (b == 0)
	{
		return (0); /* Avoid division by zero */
	}
	return (a / b);
}

/*
 * mod - Computes the modulo of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the modulo operation, or 0 if b is 0.
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		return (0); /* Avoid modulo by zero */
	}
	return (a % b);
}

