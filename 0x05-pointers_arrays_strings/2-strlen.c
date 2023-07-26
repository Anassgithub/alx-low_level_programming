#include "main.h"

/**
 * _strlen - find the length of a string
 * @s:string to be counted
 * Return: length of the string
*/

int _strlen(char *s)
{
	int length;

	for (length = 0 ; s[length] != '\0' ; length++)
		length++;
	return (length);
}
