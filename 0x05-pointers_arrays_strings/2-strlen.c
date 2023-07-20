#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: Length.
 */
int _strlen(char *s)
{
int i = 0;
int j = 0;
while (s[i] != '\0')
{
j++;
i++;
}
return (j);
}
