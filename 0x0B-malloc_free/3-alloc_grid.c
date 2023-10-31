#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This 2D grid of integers.
 * @width: width for input.
 * @height: height for input.
 * Return: pointer to 2D array of integers or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **helloworld;
	int xy, yz;

	if (width <= 0 || height <= 0)
		return (NULL);
	helloworld = (int **)malloc(sizeof(int *) * height);
	if (helloworld == NULL)
		return (NULL);
	xy = 0;
	while (xy < height)
	{
		helloworld[xy] = (int *)malloc(sizeof(int) * width);
		if (helloworld[xy] == NULL)
		{
			while (xy >= 0)
			{
				free(helloworld[xy]);
				xy--;
			}
			free(helloworld);
			return (NULL);
		}
		xy++;
	}
	xy = 0;
	while (xy < height)
	{
		yz = 0;
		while (yz < width)
		{
			helloworld[xy][yz] = 0;
			yz++;
		}
		xy++;
	}
	return (helloworld);
}
