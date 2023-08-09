#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size) {
    int i, j, k;
    if (size <= 0) {
        _putchar('\n');
    } else {
        k = size-1;
        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                if (j >= k)
                    _putchar('#');
                else
                    _putchar(' ');
            }
            _putchar('\n');
            k--;
        }
    }
}
