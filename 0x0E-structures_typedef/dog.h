#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: this struct for dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
