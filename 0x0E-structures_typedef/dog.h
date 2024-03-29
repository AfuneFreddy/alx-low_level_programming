#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basci information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of the owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
