#ifndef DOG
#define DOG

/**
  * struct dog - makes a dog
  * @name: string for name
  * @owner: doggy daddy (or mommy)
  * @age: int for age, human years
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
