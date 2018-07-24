#ifndef DOG
#define DOG

/**
  * struct dog - makes a dog
  * @name: string for name
  * @owner: doggy daddy (or mommy)
  * @age: int for age, human years
  */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
