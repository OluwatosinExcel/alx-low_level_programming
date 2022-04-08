#include <stdio.h>

/**
 * main – Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
char alphabet;

for (alphabet = ‘a’; alphabet <= ‘z’; alphabet++)
{
If (alphabet == ‘q’)
continue;

else if (alphabet == ‘e’)
continue;

put char(alphabet);
}

Putchar(‘\n’);

return (0);

}
