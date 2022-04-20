#include "main.h"

/**
 *_strien - returns length of a string
 *@s: A pointer to an int that will be updated
 *
 * Return: void - correct answer
 */

int _strlen(char *s)
{
int r;

r = 0;
while (s[r] != '\0')
{
r++;
}
return (r);
}
