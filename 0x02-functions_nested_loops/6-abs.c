#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the number to be completed.
 * Return: Absolute value of number to zero
 */

int _abs(int c
		)
{

	if (c < 10)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
