#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - function that returns a pointer to a 2-D array of integers
 *@width: width of grid
 *@height: height of grid
 *Return: grid or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(*grid));
		if (grid[i] == NULL)
		{
			return(NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
	}
	return (grid);
}
