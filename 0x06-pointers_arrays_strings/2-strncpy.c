#include "main.h"

/**
 * _strncpy - copys a string with n
 * @dest: where you copy to
 * @src: where youcopy from
 * @n: number ofchar to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
