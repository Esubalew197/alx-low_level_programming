#include "main.h"

/**
 ** rev_string - reverse string
 ** @s: string
 ** Return: void
 **/

void rev_string(char *s)
{
	char *r, tmp;

	r = s;
        while(*(r + 1) != '\0')
	{
		r = r + 1;
	}

	tmp = *s;
	*s = *r;
	*r = tmp;
}
