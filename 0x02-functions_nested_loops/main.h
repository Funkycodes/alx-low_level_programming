#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and error is set appropriately
 */

int _putchar(int c);

/**
 * print_alphabet - prints the alphabets in lowercase
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabet in lowercase
 *
 * Description: print the alphabet in lowercase followed by a newline 10 times
 * Return: void always
 */

void print_alphabet_x10(void);

/**
 * _islower - checks if provided argument is a lowercase alphabet
 * @c: letter or ASCII equivalent character to be checked for case
 *
 * Return: 0 if c is lowercase, 1 if otheriwise
 */

int _islower(int c);

/**
 * _isalpha - checks if argument is an alphabet
 * @c: argument to be checked
 *
 * Return: 0 if c is an alphabet, 1 if otherwise
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of a number to show whether negatiive or posit
 * @n: number whose sign is to be printed
 *
 * Return: 1 if n is greater then zero,-1 if lesser than and 0 if equal to
 * zero
 */

int print_sign(int n);

/**
 * _abs - computes absolute value of a number
 * @int: integer
 *
 * Return: absolute value of n
 */

int _abs(int);

/**
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void);


/**
 * times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b);
#endif
