#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
 void print_alphabet_x10(void)
{
	int a;
	char c;
	for(a = 1; a <= 10; a++)
	{
		for(c = 'a'; c <= 'z'; c++)
			_putchar(c);

}
