#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
int i ,f ,j = 0;
char k;
while (s[j] != '\0')
{
j++;
}
f=j;
for(i = 0; i < f/2; i++)
{
k = s[j-1];
s[j-1] = s[i];
s[i] = k;
j--;
}
}
