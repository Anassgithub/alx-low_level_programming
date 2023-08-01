#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest:destination where the content is to be copied
 * @src:source of data to copy
 * @n:number of byte to copy
 * Return:pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
