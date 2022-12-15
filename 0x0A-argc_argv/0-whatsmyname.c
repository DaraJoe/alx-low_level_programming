#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: count argument
 * @argv: Arguments
 * Return: Always (0) success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
