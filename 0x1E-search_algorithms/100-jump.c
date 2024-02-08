#include "search_algos.h"

/**
 * jump_search - perform jump search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t step = sqrt(size);
	size_t prev = 0;

	for (size_t idx = step; idx < size; idx += step)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev, idx);
			for (size_t i = prev; i <= idx && i < size; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i,
				       array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		prev = idx;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, size - 1);
	for (size_t i = prev; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}