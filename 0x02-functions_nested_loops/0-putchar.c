#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

		for (i = 0; i < 8; i++)
			_putchar(word[i]);
	_putchar('\n');

	return (0);
}int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int r);
int print_last_digit(int r);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n);
void putformat(int);
