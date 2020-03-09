#include "dog.h"
/**
 * init_dog - initialize a dog type variable with @name, @age, @owner
 * @name: Name of the doggy
 * @age: Doggy's name
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = *name;
		d->age = age;
		d->owner = owner;
	}
}
