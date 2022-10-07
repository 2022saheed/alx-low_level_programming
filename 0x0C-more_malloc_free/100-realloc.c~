#include <stdlib.h>
#include "main.h"

/**
*_realloc - function reallocates a memory block using malloc and free
*@ptr: pointer to the memory previously allocated
*@old_size: size in bytes
*@new_size: size in bytes
*Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *reaptr;

if (ptr == NULL)
{
reaptr = malloc(new_size);
if (reaptr == NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
return (reaptr);
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
reaptr = malloc(new_size);
if (reaptr == NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
_memcpy(reaptr, ptr, old_size);
free(ptr);
return (reaptr);
}
