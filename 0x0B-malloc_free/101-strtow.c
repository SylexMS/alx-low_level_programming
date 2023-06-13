#include "main.h"

/**
 * wrcnt - counts the nmb of wr in a str
 * @c: str to count
 * Return: int of nmb of wr
*/

int wrcnt(char *c)
{
	int i, n = 0;

	for (i = 0 ; c[i] ; i++)
	{
		if (c[i] == ' ')
		{
			if (c[i + 1] != ' ' && c[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a str into words
 * @str: str to split
 * Return: ptr to an array of str
*/

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **y;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrcnt(str);
	if (n == 1)
		return (NULL);
	y = (char **)malloc(n * sizeof(char *));
	if (y == NULL)
		return (NULL);
	y[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j] ; j++)
				;
			j++;
			y[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (y[wc] == NULL)
			{
				for (k = 0 ; k < wc ; k++)
					free(y[k]);
				free(y[n - 1]);
				free(y);
				return (NULL);
			}
			for (l = 0 ; l < j ; l++)
				y[wc][l] = str[i + l];
			y[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (y);
}
