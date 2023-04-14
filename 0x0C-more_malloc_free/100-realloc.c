#include <stdlib.h>
#include <string.h>

/**
* _realloc - Reallocates memory block using malloc and free
* @ptr: Pointer to previoud memory
* @old_size: Size of allocateed space for ptr
* @new_size: new size of new memory block
*
* Return: void *
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	result = malloc(new_size);
	if (result == NULL)
		return (NULL);

	if (old_size < new_size)
		memcpy(result, ptr, old_size);
	else
		memcpy(result, ptr, new_size);

	free(ptr);

	return (result);
}
