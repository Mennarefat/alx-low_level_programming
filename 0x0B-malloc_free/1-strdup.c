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
int r = 0;
char *ptr;
while (str[i] != '\0')
i++;
ptr = malloc(sizeof(char) * (i + 1));
if (ptr == NULL)
return (NULL);
for (r = 0; str[r]; r++)
ptr[r] = str[r];
return (ptr);
if (str == NULL)
return (NULL);
free(ptr);
return (0);
}
