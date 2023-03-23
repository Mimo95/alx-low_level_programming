#include <main.h>

/**
* main - prints _putchar
*
* Description: prints _putchar
*
* Return: 0 (Success)
*/
int main(void)
{
    char str[] = "_putchar\n";
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    
    return 0;
}
