#include "main.h"

/**
 * _strcpy - copies the string pointed to by stc
 * @dest: char type string
 * @stc: char type string
 * Description: Copy the string pointed to by pointer `src`to
 * the buffer ponted to by `dest
 * Return: Pointer to `dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\n');

	return (dest);
}
