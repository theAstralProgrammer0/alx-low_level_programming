#!/usr/bin/python3
"""This module returns the perimeter of an island described by a grid
"""
def island_perimeter(grid):
	"""
	This function returns the perimeter of the island described in grid
	Args:
		grid is a list of list of integers:
		0 represents a water zone
		1 represents a land zone
		One cell is a square with side length 1
		Grid cells are not connected diagonally.
		Grid is rectangular, width and height don’t exceed 100
	"""
	perimeter = 0
	if grid:
		for row in grid:
			for cell in row:
				if cell == 1 and perimeter < 400:
					perimeter += 4
	return perimeter
