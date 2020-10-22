#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - addition
 * op_sub - substraction
 * op_mul - multiplication
 * op_div - division
 * op_mod - modular
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
