#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - new dog program.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int xy;
	int yz;

	xy = strlen(name);
	yz = strlen(owner);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = (char *) malloc(sizeof(char) * (xy + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = (char *) malloc(sizeof(char) * (yz + 1));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
