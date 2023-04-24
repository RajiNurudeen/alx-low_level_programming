#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 *
 * Description: attributes of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog structure
 */

typedef struct dog dog_t;

#endif
