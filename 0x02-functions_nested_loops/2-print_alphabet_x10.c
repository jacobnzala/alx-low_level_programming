#include "main.h"

/**
 * print the alphabet times 10
 * Return :0 for now
 */

int print_alphabet_x10(void)
{
	char j;
	
	t = 0;

	while (t < 10){
		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}

		putchar('\n');
		t++;
	}
}
		


