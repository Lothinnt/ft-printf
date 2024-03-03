/*
This code is a part of a custom printf function, designed to handle formatting and printing of unsigned integers.
The functionality is built around several helper functions that convert an unsigned integer to a string, 
calculate the length of this number, and print the resulting string to the standard output. 
*/
#include "ft_printf.h"

// Calculates the number of digits in an unsigned integer.
static int	ft_nbrlength(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
// Converts an unsigned integer to a string representation.
static char	*ft_utoa(unsigned int n)
{
	int			len;
	char		*str;

	len = ft_nbrlength(n);
	str = (char *) malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
// Writes a string to the standard output and returns the number of characters written.
static int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

// Formats and prints an unsigned integer and returns the number of characters printed.
int ft_format_u(unsigned int n) 
{
	char *str; // Declare a pointer for the string representation of the number.
	int count = 0; // Initialize a counter for the number of characters printed.

	if (n == 0) 
	{ // Special case for zero.
		count += write(1, "0", 1); // Directly write '0' to stdout.
	} else 
	{
		str = ft_utoa(n); // Convert the number to a string.
		count += ft_putstr(str); // Print the string and update the count.
		free(str); // Free the allocated memory for the string.
	}
	return count; // Return the total number of characters printed.
}

