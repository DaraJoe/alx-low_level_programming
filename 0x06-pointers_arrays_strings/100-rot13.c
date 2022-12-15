#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: input
 * Return: the value of n
 */
char *rot13(char *n)
{
	int i, j;
	char s1[] = "HELLO";
	char s2[] = "URYYB";

	for (i = 0; n[i] = '\n'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
