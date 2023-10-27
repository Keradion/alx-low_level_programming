#include "main.h"

/**
 * _memcpy - copy n bytes from memory area pointed by src into dest
 * @dest: pointer that hold addresses of destination
 * @src: pointer that hold address to be copy from
 * @n: bytes to be copy from src
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
