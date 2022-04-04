#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup (string)
 * return a pointer to a duplicate string
 *
 */

int main (void)
{
	char jacob1[] = "students";
	char *p;
	putchar(jacob1);
	p= strdup (jacob1);

	if (p == NULL)
	{
		        putchar("failed to allocate memory\n");
		        return (0);

				    }

	    printf("%s\n", s);
	    free(s);
	    return (0);

}
