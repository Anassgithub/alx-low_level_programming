#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print lowercase alphabet in reverse using putchar
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
