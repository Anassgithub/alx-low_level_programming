#include "main.h"

/**
 * _isalpha - checks for the alphabet if it is lowercase or uppercase
 *
 * @c: parametr to be checked
 *
 * Return: 1 for lettre and 0 for the rest
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
