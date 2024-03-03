/*
 This code is part of a custom printf function implementation, specifically designed to handle the formatting and printing of decimal integers. 
 It includes utility functions for converting an integer to a string representation (ft_itoa), 
 calculating the number of digits in an integer (ft_nbrlength  and printing a string to the standard output (ft_putstr)
*/

#include "ft_printf.h" 

// Calculates the length of the number when represented as a string.
static int ft_nbrlength(int n) 
{
    int len = 0;
    if (n <= 0) .
        len = 1;
    while (n != 0) 
	{ 
        n = n / 10; 
        len++; 
    }
    return len; 
}

// Converts an integer to its ASCII string representation.
static char *ft_itoa(int n) 
{
    int len = ft_nbrlength(n); 
    char *str = (char *)malloc(sizeof(char) * len + 1);
    if (str == NULL)
        return (NULL);
    str[len] = '\0'; 
    if (n == 0)
        str[0] = '0';
    if (n < 0)
        str[0] = '-';
    while (n != 0) 
	{
        long nb = n % 10;
        if (nb < 0)
            nb = -nb;
        str[--len] = nb + '0';
        n = n / 10;
    }
    return str;
}

// Prints a string to the standard output and returns the number of characters printed.
static int ft_putstr(char *str) 
{
    int i = 0;
    while (str[i]) 
	{
        write(1, &str[i], 1);
        i++; 
    }
    return i;
}

// Formats a decimal integer for printing and returns the number of characters printed.
int ft_format_decimal(int n) 
{
    char *str = ft_itoa(n); // Convert the integer to a string representation.
    int count = ft_putstr(str); // Print the string and get the count of printed characters.
    free(str); // Free the allocated memory for the string.
    return count; // Return the count of printed characters.
}
