#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates two strings
 *@dest: A function that will be updated
 *@src: A function that will be updated / changed
 * Return: char - correct answer
 */

char *_strcat(char *dest, char *src)
{
strcat(*dest, *src);
_putchar("strcat( *dest, *src): %s\n", *dest);
}
