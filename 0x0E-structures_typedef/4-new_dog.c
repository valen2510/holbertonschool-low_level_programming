#include "dog.h"
#include <stdlib.h>
/**
 * new_dog- creates a new dog
 * @name: dog name string
 * @age: dog age value
 * @owner: dog's owner string
 * Return: new (Success) NULL (Failed)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *copyname;
	char *copyowner;

	new = NULL;
	copyname = NULL;
	copyowner = NULL;

	new = malloc(sizeof(struct dog));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	copyname = copys(copyname, name);
	copyowner = copys(copyowner, owner);

	if (!copyowner || !copyname)
	{
		free(copyname);
		free(copyowner);
		free(new);
		return (NULL);
	}

	new->name = copyname;
	new->age = age;
	new->owner = copyowner;

	return (new);
}

/**
 * copys - copy string
 * @s1: destined string
 * @s2: source string
 * Return: s1 (Success) NULL (Failed)
 */
char *copys(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s2[i] != '\0'; i++)
		;

	s1 = malloc(sizeof(char) * (i + 1));

	if (!s1)
		return (NULL);

	for (n = 0; n <= i; n++)
		s1[n] = s2[n];

	return (s1);
}
