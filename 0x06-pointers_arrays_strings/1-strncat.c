#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - A function that concatenates two strings
 *@dest: A function that will be updated / changed
 *@src: A function that will be updated / changed
 *@n: A function to determine whethher src will be null-terminated
 *Return: char - correct answer
 */

char *_strncat(char *dest, char *src, int n)
{
  strcpy(src, "This is source");
  strcpy(dest, "This is destination");

  strncat(dest, src, n);

  _putchar("Final destination string : |%s|", dest);
}
