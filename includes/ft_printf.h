#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_format_character(int c);
int	ft_format_string(char *str);
int	ft_format_pointer(unsigned long long ptr);
int	ft_format_decimal(int n);
int	ft_format_u(unsigned int n);
int	ft_format_hex_upp(unsigned int n);
int	ft_format_hex_low(unsigned int n);

#endif
