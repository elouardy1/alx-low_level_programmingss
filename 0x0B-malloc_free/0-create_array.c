#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int s, char c)
{
	char *array = NULL;
	unsigned int i;

	if (s == 0)
		return (NULL);
	if (s != 0)
	{
		array = (char *)malloc(s * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < s; i++)
				array[i] = c;
		}
	}
	return (array);
}
