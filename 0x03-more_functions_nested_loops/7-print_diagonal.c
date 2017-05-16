#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - a diagonal line on the terminal
 * @n: number of times to print '\'
 * Return: none
 */
void print_diagonal(int n)
{
	int lines, spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (lines = 0; lines < n; lines++)
	{
		for (spaces = 0; spaces <= lines; spaces++)
		{
			_putchar(' ');
			if (lines == spaces)
				_putchar('\\');
		}

		_putchar('\n');
	}

}
