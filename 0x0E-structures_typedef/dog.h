#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure type for a dog
 * @name: member to hold name
 * @age: member to hold age
 * @owner: member to hold owner
 *
 * Description: struct dog structure data type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
#endif
