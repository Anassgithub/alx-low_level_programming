#include "main.h"

/**
 * _isdigit - function that checks for digits for 0 through 9
 *
 * @c: function parameter
 *
 * Return: if c is digits 1 otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
