#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - allocates memory using malloc
*@b: number of bytes to allocate
*
*Return: a pointer to the allocated memor
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = void *malloc(sizeof(unsigned int));
if (ptr == NULL)
exit(98);
return (ptr);
}
