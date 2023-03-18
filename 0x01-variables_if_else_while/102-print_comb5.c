#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations
 * of two-figit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int firstDijit = 0, seconDijit;

	while (firstDijit <= 99)
	{
		seconDijit = firstDijit;
		while (seconDijit <= 99)
		{
			if (seconDijit != firstDijit)
			{
				putchar((firstDijit / 10) + 48);
				putchar((firstDijit % 10) + 48);
				putchar(',');
				putchar((seconDijit / 10) + 48);
				putchar((seconDijit % 10) + 48);

				if (firstDijit != 98 || seconDijit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDijit++;
		}
		firstDijit++;
	}
	putchar('\n');
	return (0);
}
