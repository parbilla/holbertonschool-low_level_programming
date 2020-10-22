#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - addition
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modular
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
