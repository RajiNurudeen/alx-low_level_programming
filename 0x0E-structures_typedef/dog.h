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

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

#endif
