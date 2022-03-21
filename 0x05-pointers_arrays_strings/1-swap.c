#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer value
 * @b: integer value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
