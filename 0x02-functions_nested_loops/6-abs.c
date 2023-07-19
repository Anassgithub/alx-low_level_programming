#include "main.h"

/**
 * _abs - function to find absolute value of a number
 *
 * int: input number as integer
 *
 * @a:function parametr
 *
 * Return: -a or a
*/

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
