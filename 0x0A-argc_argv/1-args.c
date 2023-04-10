#include <stdio.h>

/**
 * main - entry point
 *
 * @argv: number of arg passed
 * @argc: pointer to an array of command line arg
 *
 * Return: Awlays 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
