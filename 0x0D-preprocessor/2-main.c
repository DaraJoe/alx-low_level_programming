#include <stdio.h>

/**
 * main - print the name of the file program was complied from
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
