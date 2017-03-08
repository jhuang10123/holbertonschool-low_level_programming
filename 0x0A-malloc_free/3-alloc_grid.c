#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if ( width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int*) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);

}
