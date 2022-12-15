#include "main.h"

/**
 * _memset - functions that fill the memory with a constant byte
 * @s: a string
 * @b: a character
 * @n: an integer
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	
	return (s);
}
