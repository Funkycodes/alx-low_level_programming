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
