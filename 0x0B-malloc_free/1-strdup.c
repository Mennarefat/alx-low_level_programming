#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_strdup - duplicate to new memory space location
*@str: char
*Return: 0
*/
char *_strdup(char *str)
{
unsigned int i = 0;
char *strdup[size];
strdup = malloc(sizeof(char) * 2);
if (strdup != NULL)
{
while (i < size)
i++
strdup[i] = str;
}
if (str == NULL)
return (NULL);
free(strdup);
}
