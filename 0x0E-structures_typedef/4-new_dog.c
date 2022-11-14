#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that calculates the length of string
 *@s: string input
 * Return: Always len on success.
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination variable
  * @src: Source variable
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog.
 * @name: name of dog.
 * @age: Age of dog.
 * @owner: The owner of dog.
 * Return: NULL if unsuccessful, otherwise the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->name = _strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcpy(doggie->owner, owner);

	return (doggie);
}
