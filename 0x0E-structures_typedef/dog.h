#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Description of dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
