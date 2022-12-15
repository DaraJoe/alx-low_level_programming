#include "main.h"

/**
 * string_toupper - changes all lowercase string to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}

	return (n);
}
