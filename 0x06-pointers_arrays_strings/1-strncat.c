#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strncat - A function that concatenates two strings
 *@dest: A function that will be updated / changed
 *@src: A function that will be updated / changed
 *@n: A function to determine whether src will be null-terminated
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest); 
}
