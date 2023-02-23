#include "main.h"
#include <unistd.h>

/**
 * -putchar - writes the character c to stdout
 *  @c: the character to print
 *
 * Return: On successful 1.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
