#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed char x;
        int n; 
	for (n = 97; n <= 122; n++)
	{
	x = n;
	printf("%c", x);
	}
	return (0);
}
