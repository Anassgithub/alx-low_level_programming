#include "main.h"

/**
 * print_diagonal - print a diagonal line on the terminal
 *
 * @n: number of times the character '\' will be printed
 *
 * Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
