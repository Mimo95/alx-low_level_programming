#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main() {
    long int x = 612852475143;
    long int k = 2;
    
    while (x != 1) {
        if (x % k == 0) {
            printf("%ld ", k);
            x /= k;
        } else {
            k++;
        }
    }
    
    printf("\n");
    
    return 0;
}
