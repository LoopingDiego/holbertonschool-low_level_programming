#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - returns the first substring coincidence.
 * @haystack: string where you are looking for
 * @needle: subtring to found
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int index2;
	int counter;

	counter = 0;

	for (index2 = 0; haystack[index2] != '\0'; index2++)
	{
		if (needle[counter] == haystack[index2])
		{
			if (needle[counter + 1] == '\0')
				return (&haystack[index2 - counter]);
			counter += 1;
		}
		else
			counter = 0;

	}
	if (haystack[index2] == '\0')
		return (NULL);
	else
		return (haystack);
}
