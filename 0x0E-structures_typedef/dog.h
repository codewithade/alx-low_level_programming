#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - xtics of a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: This is a dog data struc
 */
typedef struct dog
{
char *name;
char *owner;
float age;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
