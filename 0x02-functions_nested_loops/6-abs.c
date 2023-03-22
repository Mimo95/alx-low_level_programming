#include "main.h"

/**
 *_abs - absolute value of a number.
 *@n: input.
 *
 *Return: absolute value
 *
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
