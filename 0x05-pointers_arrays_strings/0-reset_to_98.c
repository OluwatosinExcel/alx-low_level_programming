#include "main.h"

/**
 * reset_to_98 - update a integer value to 98
 *@n: A pointer to an int that will be updated
 *
 * Return: void that means is correct
 */

void reset_to_98(int *n)

{
int a;
int *p;
a = 98;
p = &a;

_putchar("%d\n", *p);
}
