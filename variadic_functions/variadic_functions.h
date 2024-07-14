#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printchar(va_list print);
void printint(va_list print);
void printfloat(va_list print);
void printstr(va_list print);

typedef struct check
{
  char *type;
  void (*f)();
} check;
#endif /* VARIADIC_FUNCTIONS_H */
