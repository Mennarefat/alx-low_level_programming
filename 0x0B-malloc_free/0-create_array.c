#include "main.h"
#include <stdlib.h>
/**
*create_array - create array of size size and assign char c
*@size: size of array
*@c: char to assign
*Description: create array of size size and assign char c
*Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr
arr  = malloc(size * sizeof(char))
for (i = 0; i < size; i++)
{
arr[i] = c;
return (arr);
}
if (size == 0 || arr == NULL)
return (NULL);
}
