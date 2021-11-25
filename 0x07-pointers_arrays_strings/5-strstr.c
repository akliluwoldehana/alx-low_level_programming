#include "main.h"
#include <stddef.h>
/**
 * _strstr -  a function that locates a substring.
 * @haystack: pointer
 * @needle: - pointer
 * Return:  a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;
	if (*b == 0)
	{
		return ((char *) haystack);
	}
	for (; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;

		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (NULL);
}
