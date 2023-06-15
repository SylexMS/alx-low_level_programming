#include "main.h"

/**
 * _realloc - allocates a memory block using malloc and free
 * @ptr: ptr to memory allocated with malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size of bytes of the new memory block
 * Return: NULL if new_size = 0 and ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		return (pt);
	}
	if (new_size > old_size)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)pt + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (pt);
}
