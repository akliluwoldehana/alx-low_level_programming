#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
	putchar(n);
	}
	for (m = 97; m < 102; m++)
	{
	putchar(m);
	if (n == 57)
	{
	putchar('\n');
	}
	}
	return (0);

}
