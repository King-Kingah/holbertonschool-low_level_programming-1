#include "function_pointers.h"
/**
 * array_iterator - 
 * @array: integer
 * @size: unsigned integer
 * @action: function pointer that takes integer argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == NULL || action == NULL)
		return;

}
