#include "main.h"

/**
 * _strlen - find the length of string
 * @s:string to be counted
 * Return: length of the string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		i++;
	return (i);
}
