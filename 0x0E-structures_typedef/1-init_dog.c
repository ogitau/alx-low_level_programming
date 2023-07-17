#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable
 * @d: pointer to struct dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: pointer to struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
