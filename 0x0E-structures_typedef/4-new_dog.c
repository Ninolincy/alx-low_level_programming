#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to get length
 * Return: length of string
 */

int _strlen(char *s)
{
	char length = 0;

	while (*s++)
		length++;
	return (length);
}
/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: Destination value
 * @src: Source value
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z++] = '\0';
	return (dest);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Pointer to the new dog, otherwise return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *age;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
