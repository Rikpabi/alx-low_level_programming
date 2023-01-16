#include <stddef.h>
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains dog information
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: hold all data needed for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
