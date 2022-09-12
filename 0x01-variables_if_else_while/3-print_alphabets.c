#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	char num1;
	char num2;

	for (num1 = 'a'; num1 <= 'z'; num1++)
	putchar(num1);
	for (num2 = 'A'; num2 <= 'Z'; num2++)
	putchar(num1);
	putchar(num2);
	putchar('\n');
	return (0);
}
