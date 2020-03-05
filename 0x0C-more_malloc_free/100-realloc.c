#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *aux = ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		for (i = 0; i < new_size; i++)
		{
			
		}
	}
	ptr = malloc(new_size);

	if (new_size > old_size)
	{

	}
}
