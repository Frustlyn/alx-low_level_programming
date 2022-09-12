#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char num;

	for (num = 'a'; num <= 'z'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
