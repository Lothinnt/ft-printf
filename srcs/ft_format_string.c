// This function is responsible for printing a string and returning the number of characters printed.

#include "ft_printf.h"

int ft_format_string(char *str) 
{
    int i = 0;

    if (str == NULL) 
	{
        write(1, "(null)", 6);
        return (6); 
    }
    while (str[i] != '\0') 
	{ 
        write(1, &str[i], 1);
        i++; 
    }
    return (i);
}
