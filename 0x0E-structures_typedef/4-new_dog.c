#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: address of striong to copy
 *
 * Return: address of duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i = 0, j = 0;

	if (!str)
		return (NULL);
	while (str[i] != '\0')
		i++;
	duplicate = (char *) malloc(1 + sizeof(char) * i);
	if (!duplicate)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		duplicate[j] = str[j];
	}
	return (duplicate);
}
/**
 * new_dog - create a new variable type dog_t
 * @name: Address of name string
 * @age: age of the dog
 * @owner: addtess of owners name
 * Return: address of type dog_t element
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
