#include "main.h"
/**
 * _strncat - concatenates n bytes between two strings
 * @dest: destination string
 * @src: source string
 * @n: number of n bytes to concatenate
 * Return: a pointer to te string dst
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] != '\0';
return (dest);
}
