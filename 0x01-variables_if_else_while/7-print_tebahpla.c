#include <stdio.h>
/**
  * main - Entry point
  * Description: 'prints all alphabets in reverse'
  * Return: Always 0 (success)
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
