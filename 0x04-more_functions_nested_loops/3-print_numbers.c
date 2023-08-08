#include "main.h"

/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void){
	char num ;
	for(num = '0' ; num <= '9' ; num++ )
	_putchar(num);
	_putchar('\n');
}
