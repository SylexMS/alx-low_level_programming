#include "function_pointers.h"

/**
 * array_iterator - maps an array through a funtcion pointer
 * @array: int arr
 * @size: arr size
 * @action: fun pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *edf = array + size - 1;

	if (array && size && action)
		while (array <= edf)
			action(*array++);
}
