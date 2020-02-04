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
	int temp;
	size_t x, y;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - 1 - x; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
			/*print_array(array, size);*/
		}
		/*print_array(array, size);*/
	}
}
