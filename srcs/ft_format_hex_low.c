/*
This code is a component of a custom printf function implementation, aimed at handling the formatting 
and printing of unsigned integers in hexadecimal format with lowercase letters. 
The code consists of helper functions to print characters, calculate the length of the hexadecimal representation, 
recursively print the hexadecimal number and a main function to handle the formatting according to the specified requirements. 
*/

#include "ft_printf.h" 

// Writes a character to the standard output and returns 1.
static int ft_putchar(char c) 
{
	write(1, &c, 1);
	return (1); 
}

// Calculates the length of the hexadecimal representation of an unsigned integer.
static int ft_hex_len(unsigned int num) 
{
	int len = 0;
	while (num != 0) 
	{ 
		len++; /
		num = num / 16; 
	}
	return len; 
}

// Recursively prints an unsigned integer in hexadecimal format with lowercase letters.
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
			ft_putchar(num - 10 + 'a'); 
	}
}

// Handles the formatting of an unsigned integer as a lowercase hexadecimal number.
int ft_format_hex_low(unsigned int n) 
{
	if (n == 0)
		return (write(1, "0", 1)); 
	else
		ft_print_hex(n); // Otherwise, recursively print the number in hex format.
	return (ft_hex_len(n)); // Return the length of the number's hexadecimal representation.
}

