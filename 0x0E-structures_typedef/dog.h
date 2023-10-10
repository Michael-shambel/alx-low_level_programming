#ifndef DOG_h
#define DOG_h

/**
 * struct dog - information of dog
 * @name: input 1
 * @age: input 2
 * @owner: input 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - change the name
 *
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
