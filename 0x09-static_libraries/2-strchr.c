#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the string to be located
 * Return: c if found return a pointer to index . null if not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if  (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
