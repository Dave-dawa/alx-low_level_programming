#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 *  strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"); 
 */
int main(void)
{
	int s = 59;
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      s);
	return (1);
}
