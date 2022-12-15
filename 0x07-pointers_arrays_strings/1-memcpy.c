#include "main.h"

/**
 * _memcpy - functions that copirs memory area
 * @dest: the destination
 * @src: the source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
