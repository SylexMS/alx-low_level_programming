#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns to a 2 dim
 * array of int
 * @width: first int
 * @height: second int
 * Return: array
*/

int **alloc_grid(int width, int height)
{
	int **sp, i, j;

	sp = malloc(sizeof(*sp) * height);

	if (width <= 0 || height <= 0 || sp == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < height ; i++)
		{
			sp[i] = malloc(sizeof(**sp) * width);
			if (sp[i] == 0)
			{
				while (i--)
					free(sp[i]);
				free(sp);
				return (NULL);
			}

			for (j = 0 ; j < width ; j++)
				sp[i][j] = 0;
		}
	}

	return (sp);
}
