#include "main.h"
/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 * Return: Always 0 (Sucess)
 *
 */
void print_alphabet_x10(void)
{
int round = 0;
char letter = 'a';
while (round < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
round++;
}
}
