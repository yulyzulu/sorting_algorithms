#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
*selection_sort - sorts an array of integers in ascending order- Selection sort
*@array: array of numbers
*@size: size of array
*/
void selection_sort(int *array, size_t size)
{
	int aux = 0;
	size_t i, j, min = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			print_array(array, size);
		}
	}
}
