#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowecase exept q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
