#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - allocates memory
 * @s1: first variable to concatenate
 * @s2: second one to concatenate
 * @n: the size of the second line
 * Return: pointer to allocated space, null if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_res;
	unsigned int counter, switcher = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (switcher = 0; s2[switcher] != '\0'; switcher++)
	{}
	for (counter = 0; s1[counter] != '\0'; counter++)
	{}
	if (n < switcher)
		str_res = malloc((n + 1) + counter);
	else
		str_res = malloc((counter + 1) + switcher);
	switcher = 0;
	if (str_res == NULL)
		return (NULL);
	for (counter = 0; str_res; counter++)
	{
		if (s1[counter] != '\0' && switcher == 0)
			str_res[counter] = s1[counter];
		else if (switcher == 0)
		{
			switcher = counter;
			counter = 0;
		}
		if (switcher != 0 && counter < n)
			str_res[switcher + counter] = s2[counter];
		if (switcher != 0 && (counter == n || s2[counter] == '\0'))
		{
			str_res[switcher + counter] = '\0';
			break;
		}
	}
	return (str_res);
}
