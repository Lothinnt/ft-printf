/*  This function prints a character to the standard output. */

#include "ft_printf.h"

int ft_format_character(int c) 
{
	write(1, &c, 1); // Use the write function to output the character 'c' to stdout (file descriptor 1).
	return (1); 
}
