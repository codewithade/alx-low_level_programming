/**
 * struct dog - xtics of a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: This is a dog data struc
 */
struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);