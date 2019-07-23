#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: dog struct
 * @name: char name
 * @age: float age
 * @owner: char owner
 *
 */
void free_dog(dog_t *d)
{
        free(d);
}
