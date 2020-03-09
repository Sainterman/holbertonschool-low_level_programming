#ifndef DOG
#define DOG
/**
 * struct dog - structure that has 3 elements @name, @owner, @age
 * @name: name of the dawg
 * @owner: owner of the dawg
 * @age: good boy's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
