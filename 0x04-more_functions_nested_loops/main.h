#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_last - prints digit last
 *
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);

void jack_bauer(void);

void times_table(void);
/**
 * add - adds stuff up
 *
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 *
 */
void print_to_98(int n);
/**
 * print_times_table - whatever man
 *@n: integer to put in this table
 *
 */
void print_times_table(int n);
/**
 * _isupper - determines uppercase or not
 * @c: character to determine
 * Return: true or false
 */
int _isupper(int c);
/**
 * _isdigit - checks if it is digit
 * @c: character to check
 *
 * Return: returns boolean
 */
int _isdigit(int c);
/**
 * mul - multiplies stuff
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: gives result
 */
int mul(int a, int b);
/**
 * print_numbers - prints the numbers
 *
 */
void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);
/**
 * print_line - prints a line
 *
 * @n: integer to print stuff
 */
void print_line(int n);
/**
 * @n: integer to see how many stupid lines
 */
void print_diagonal(int n);
/**
 * print_square - prints a square
 *
 * @size: prints the size of whatever
 */
void print_square(int size);
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size);
/**
 * print_number - prints number
 *
 * @n: integer to print to char
 */
void print_number(int n);
#endif 