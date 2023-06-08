#include "main.h"

/**
 * mv_pt_star - iterates past asterisk
 * @str2: the second string
 * Return: ptr past star
*/
char *mv_pt_star(char *str2)
{
	if (*str2 == '*')
		return (mv_pt_star(str2 + 1));
	else
		return (str2);
}
/**
 * inception - makes magic a reality
 * @str1: first str
 * @str2: second str
 * Return: 1 if identical, 0 if false
*/

int inception(char *str1, char *str2)
{
	int rt = 0;

	if (*str1 == 0)
		return (0);
	if (*str1 == *str2)
		rt += wildcmp(str1 + 1, str2 + 1);
	rt += inception(str1 = 1, str2);

	return (rt);
}
/**
 * wildcmp - compares two strs
 * @s1: the first str
 * @s2: second str
 *
 * Return: 1 if identical, 0 if false
*/
int wildcmp(char *s1, char *s2)
{
	int rt = 0;

	if (!*s1 && *s2 == '*' && !*mv_pt_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = mv_pt_star(s2);
		if (!s2)
			return (1);
		if (*s1 == *s2)
			rt += wildcmp(s1 + 1, s2 + 1);
		rt += inception(s1, s2);
		return (!!rt);
	}
	return (0);
}
