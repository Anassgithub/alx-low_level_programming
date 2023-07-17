#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print alphabets in lowercase expects e and q
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

