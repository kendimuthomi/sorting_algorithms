#include "sort.h"

/**
 * selection_sort - uses selection sort to sort an array
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_i, index, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_i = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min_i)
			{
				min_i = array[j];
				index = j;
			}
		}
		if (min_i != array[i])
		{
			 temp = array[i];
			 array[i] = min_i;
			 array[index] = temp;
			 print_array(array, size);
		}
	}
}
