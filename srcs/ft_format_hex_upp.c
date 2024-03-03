/*
This code is a part of a custom implementation designed 
to format and print an unsigned integer as a hexadecimal number using uppercase letters. 
*/

#include "ft_printf.h"

// Writes a character to the standard output and returns 1 as the number of characters written.
static int ft_putchar(char c) 
{
	write(1, &c, 1);
	return (1);
}

// Calculates the length of an unsigned integer when represented in hexadecimal.
static int ft_hex_len(unsigned int num) 
{
	int len = 0;
	while (num != 0) 
	{
		len++; 
		num = num / 16; 
	}
	return len; 
}

// Recursively prints an unsigned integer in hexadecimal format using uppercase letters.
static void ft_print_hex(unsigned int num) 
{
	if (num >= 16) 
	{
		ft_print_hex(num / 16);
		ft_print_hex(num % 16);
	}
	else 
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else 
			ft_putchar(num - 10 + 'A'); 
	}
}

// Formats an unsigned integer n as a hexadecimal number using uppercase letters and prints it.
int ft_format_hex_upp(unsigned int n) 
{
	if (n == 0)
		return (write(1, "0", 1)); // Special case for 0, directly print '0' and return 1.
	else
		ft_print_hex(n); // Use the recursive function to print the number in hexadecimal.
	return (ft_hex_len(n)); // Return the number of digits printed (the length of the hexadecimal representation).
}
