#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct that creates a dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: the first struct with alx
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
#endif
