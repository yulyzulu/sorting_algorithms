#include "sort.h"
#include <stdlib.h>
/**
*quick_sort- sorts an array of integers using Quick sort
*@array: array of integers
*@size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

/**
*swap- swap two variables
*@a: pointer
*@b: pointer
*@array: array
*@size: size of the array
*/
void swap(int *a, int *b, int *array, size_t size)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	if (*a != temp)
		print_array(array, size);
}

/**
*partition - sorts an array
*@array: array to sort
*@first: first position
*@last: last position
*@size: size of the array
*Return: Integer
*/
int partition(int *array, int first, int last, size_t size)
{
	int piv, i, j/*, aux, aux2*/;

	piv = array[last];
	i = first;
	for (j = first; j < last; j++)
	{
		if (array[j] < piv)
		{
			swap(&array[i], &array[j], array, size);
			i++;
		}
	}
	swap(&array[i], &array[last], array, size);
	return (i);
}
/**
*quicksort - sort array
*@array: array of integers
*@first: first position of the array
*@last: last position of the array
*@size: size of the array
*/
void quicksort(int *array, int first, int last, size_t size)
{
	int tem;

	if (first < last)
	{
		tem = partition(array, first, last, size);
		quicksort(array, first, tem - 1, size);
		quicksort(array, tem + 1, last, size);
	}

}
