#include "sort.h"
#include <stdlib.h>
/**
*quick_sort- sorts an array of integers using Quick sort
*@array: array of integers
*@size: size of array
*/
void quick_sort(int *array, size_t size)
{
	q_s(array, 0, size - 1);
}

/**
*q_s - sorts an array
*@array: array to sort
*@first: first position
*@last: last position
*/
void q_s(int *array, int first, int last)
{
	int i, j, piv, temp;

	if (first < last)
	{
		piv = first;
		i = first;
		j = last;

		while (i < j)
		{
			while (array[i] <= array[piv] && i < last)
			{
				i++;
			}
			while (array[j] > array[piv])
			{
				j--;
			}
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		temp = array[piv];
		array[piv] = array[j];
		array[j] = temp;
		/*print_array(array, first + last);*/
		q_s(array, first, j - 1);
		q_s(array, j + 1, last);
	}
}

