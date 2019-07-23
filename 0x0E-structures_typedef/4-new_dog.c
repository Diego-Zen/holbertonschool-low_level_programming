B#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - creates a new dog
 *
 * @name: char name
 * @age: float age
 * @owner: char owner
 *
 * Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *my_dog;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
