#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list argsList);
int print_char(va_list argsList);

int absalute(int num);
int printdigit(int num);
int printinteger(int num);
int print_int( va_list var);
int handle_format_specifier(char specifier, va_list argsList);
int print_binary(va_list argsList);
#endif
