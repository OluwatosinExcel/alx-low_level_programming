#include "main.h"
/**
 *_puts_recursion - A function that prints a string, followed by a new line
 *@s: string
 * Return: String
 */
void _puts_recursion(char *s)
{
int y;

for (y = 0; s[y]; y++)
{
_putchar (s[y]);
}
_putchar ('\n');
}
