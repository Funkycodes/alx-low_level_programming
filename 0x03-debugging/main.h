#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * positive_or_negative - prints whether a given number is positve or negative
 * @i: number to be checked
 *
 * Return:void
 */

void positive_or_negative(int i);

/**
 * largest_number - returns the largest of a given set of numbers
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: The largest of the given parameters
 */

int largest_number(int a, int b, int c);

/**
 * print_remaining_days - prints the days left before the year runs out
 * @month: parameter in the form of the corrent month
 * @day: day of the month
 * @year: year whose days left are to be calculated
 *
 * Return: Void
 */
void print_remaining_days(int month, int day, int year);

/**
 * convert_day - convert day of month to day of year, without accounting for
 * leap year
 * @month: month in number format
 * @day: day of month
 *
 * Return: day of year
 */

int convert_day(int month, int day);

#endif /*MAIN_H*/
