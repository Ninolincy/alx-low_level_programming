#include "search_algos.h"

/**
 * binary_search - search using a binary search
 * @array: the array
 * @size: array size
 * @value: the search value
 * Return: where the value is located or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, mid, high, index;

	if (size == 0 || array == NULL)
		return (-1);

	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (index = low; index <= high; index++)
			printf(index < high ? "%d, " : "%d\n", array[index]);
		mid = (high + low) / 2;
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}