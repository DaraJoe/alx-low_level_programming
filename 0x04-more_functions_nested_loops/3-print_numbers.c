#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(++a + '0');

	_putchar('\n');
}
