#include <search_algos.h>

/**
 * linear_search - searches a value in an array of integers
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * 
 * Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while ((size_t)i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}