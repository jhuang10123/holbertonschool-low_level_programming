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
		_putchar('\n');
	else
	{
		for (lines = 1; lines < n; lines++)
		{
			for (spaces = 1; spaces <= lines; spaces++)
			{
				if (lines == spaces)
				{
					_putchar('\\');
					_putchar('\n');
				}
				_putchar(' ');
			}

		}
	}
}
