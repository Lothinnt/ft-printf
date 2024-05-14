# ft_printf - Custom printf Function

## Introduction

ft_printf is a custom implementation of the C standard library function printf. This project is a part of my programming training

The implementation supports several format specifiers:

    %c for characters
    %s for strings
    %p for pointer addresses
    %d and %i for signed decimal integers
    %u for unsigned decimal integers
    %x and %X for hexadecimal numbers (lowercase and uppercase)
    %% for printing a literal percent sign

Its work like the real printf function

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
