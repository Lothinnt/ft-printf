# ft_printf - Custom printf Function

## Introduction

ft_printf is a custom implementation of the C standard library function printf. This project is a part of my programming training, aimed at understanding how formatted output works in C and enhancing my skills in variadic functions, string manipulation, and advanced type handling. Through reimplementing printf, I explore the intricacies of handling variable argument lists and formatting data for output.
Contents

The implementation supports several format specifiers:

    %c for characters
    %s for strings
    %p for pointer addresses
    %d and %i for signed decimal integers
    %u for unsigned decimal integers
    %x and %X for hexadecimal numbers (lowercase and uppercase)
    %% for printing a literal percent sign

In addition to the standard format specifiers, this project also delves into custom utility functions that facilitate the conversion and printing processes, such as:

    Memory allocation and management functions
    Character output functions
    Number conversion functions to various bases (decimal, hexadecimal)
    String manipulation and output functions

## Project Goals

    To demystify the process behind formatted text output in C programming.
    To gain a deeper understanding of variadic functions and how to process variable argument lists.
    To practice implementing complex logic for type conversion and output formatting.
    To create a reusable ft_printf function that can be used in future C projects as a drop-in replacement or alongside the standard printf function.

##  Usage
You can clone this repository and compile the library using `make`. This will create a `libftprintf.a` file which you can link to your C projects to use printf functions.

``` 
Example:


#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s. You have %d unread messages.\n", "Alice", 5);
    return 0;
}
```  
---

This project reflects my ongoing journey in mastering C programming.

---