#include "main.h"

/**
* main - Print alphabet in lower case
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char p[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 27; i++)
		{
		putchar(p[i]);
		}
		putchar('\n');
	return (0);
}
