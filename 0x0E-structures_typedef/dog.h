#ifndef HEADER_DOG
#define HEADER_DOG

/**
 * struct dog - structure to describe dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
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
char *_strdup(char *str);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif

