#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		des[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
