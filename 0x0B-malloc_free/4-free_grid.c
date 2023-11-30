#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
*@ free_grid(int **grid, int height):frees a 2 dimensional grid
*@grid: the address of the two dimensional grid
*@width: width of the grid
*@height: height of the grid
*Return:
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
