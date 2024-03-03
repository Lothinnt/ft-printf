/* 
This code is designed for a custom implementation of the printf function, specifically to handle and format pointer addresses for printing in a hexadecimal format. 
It includes functions to print characters, print a special case for null pointers, calculate the hexadecimal length of a number, and recursively print a number in hexadecimal format.
*/

#include "ft_printf.h"

// Writes a character to the standard output and returns 1.
static int ft_putchar(char c) 
{
	write(1, &c, 1);
	return (1); 
}

// Prints the string "(nil)" for null pointers and returns 5.
static int ft_putchar_two(char c) 
{
	(void)c; 
	write(1, "(nil)", 5);
	return (5);
}

// Calculates the length of an unsigned long number in hexadecimal representation.
static int ft_hex_len(unsigned long num) 
{
	long len = 0;
	while (num != 0) 
	{
		len++;
		num = num / 16;
	}
	return len; 
}

// Recursively prints an unsigned long number in hexadecimal format using lowercase letters.
static void ft_print_hex(unsigned long num) 
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
		{
			ft_putchar(num - 10 + 'a');
		}
	}
}

// Formats an unsigned long long pointer for printing and returns the number of characters printed.
int ft_format_pointer(unsigned long long ptr) 
{
	int count = 0; // Initialize count of printed characters.
	if (ptr == 0) {
		return (count += ft_putchar_two('c')); // If pointer is null, print "(nil)" and return count.
	}
	else {
		count = count + ft_putchar('0'); // Print the '0' character.
		count = count + ft_putchar('x'); // Print the 'x' character, indicating hexadecimal format.
		ft_print_hex(ptr); // Recursively print the pointer address in hexadecimal.
		return (count + ft_hex_len(ptr)); // Return the total count of characters printed.
	}
	return (count); // Return the count (this line is redundant due to the return statements above).
}

