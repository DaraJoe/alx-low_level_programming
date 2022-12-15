#include <stdio.h>

/**
 * main - prints alphabet in reverse
 * Return: Always o
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);
	putchar('\n');

	return (0);
}
