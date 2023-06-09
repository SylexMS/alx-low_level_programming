#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum nm of coins to make change
 * for an amount of money
 * @argc: nmb of command lines arg
 * @argv: ptr to an array of commanline arg
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, Lcents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			Lcents += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", Lcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
