#include <stdlib.h>
#include "dog.h"
/**
*free_dog - frees memory allocated for a struct dog
*@d: struct dog to free
*/
void free_dog(my_dog *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

