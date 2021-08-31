#include<stdio.h>
/**
 * printName - print a provided name
 * @name: hold the name to be printed
 * Return: void
 */
void printName(char name[])
{
	printf("%s\n", name);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printName("Holberton");
	return (0);
}
