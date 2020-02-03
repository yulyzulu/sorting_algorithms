#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
*bubble_sort - Sorts an array of integers in ascending order with Buble sort
*@array: poiter array
*@size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	int temp; /*i, a;*/
	size_t x, y;

	for (x = 0; x < size - 1; x++)
	{
		for (y = x + 1; y < size; y++)
		{
			if (array[x] > array[y])
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
			}
			/*print_array(array, size);*/
		}
	}
}
