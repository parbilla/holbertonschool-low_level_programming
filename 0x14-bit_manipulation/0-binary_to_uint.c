#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: char to convert.
 * Return: unsigned int converted from binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n;

	n = 0;
	/* b is NULL*/
	if (b == 0)
	{
		return (0);
	}
	/* looks over the char given */
	for (i = 0; b[i] != 0; i++)
	{
		/* looks if al char are 0 or 1 */
		if (b[i] == '0' || b[i] == '1')
		{
			/* moves char to the left for every valid bit */
			n = n << 1;
			/* sums 1 for every bit 1 */
			if (b[i] == '1')
			{
				n += 1;
			}
		}
		/* returns 0 if any char is != from 0 or 1 */
		else
		{
			return (0);
		}
	}
	/* return number converted from binary */
	return (n);
}
