#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: parameter
 * Returns: returns nothing
 */

void print_line(int n){
    int indice ;
    if(n<=0){
    _putchar('\n');
    }
    else {
    for(indice=0 ; indice < n; indice++)
        _putchar('_');
    _putchar('\n');
    }
}
