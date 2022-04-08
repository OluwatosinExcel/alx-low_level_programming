#include <stdio.h>

/**
 * main – Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
char alphabt;

for (alphabt = ‘a’; alphabt <= ‘z’; alphabt++)
{
If (alphabt == ‘q’)
continue;

else if (alphabt == ‘e’)
continue;

put char(alphabt);
}

Putchar(‘\n’);

return (0);

}
