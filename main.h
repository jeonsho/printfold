#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list argsList);
int print_char(va_list argsList);
int print_int(va_list argsList);
#endif
