#include  <stdio.h>
/**
 * _isupper - check if c is uppercase
 * @c : hold char
 * Return: 0 if succesful
 */

int _isupper(char c)
{
	for (char l = 'A'; l < 'Z'; l++)
	{
	if (c == l)
	{
	return (1);
	}

	}


	return (0);
}
