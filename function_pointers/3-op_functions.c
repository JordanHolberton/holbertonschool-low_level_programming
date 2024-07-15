#include "function_pointers.h"

/**
 * op_add - function that calculate two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the addition of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that show the difference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference between two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication between two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the div of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: div between a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - show the reminder of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: reminder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

