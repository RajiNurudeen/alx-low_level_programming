#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog's attributes
 * @name: first element of the dog
 * @age: second element of the dog
 * @owner: third element of dog
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
