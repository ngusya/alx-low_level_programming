#ifndef _VARIADIC_FUNC_H_
#define _VARIADIC_FUNC_H_
int sum_them_all(const unsigned int n, ...);
#include<stdarg.h>
/**
 * struct print - multiple choice print
 * @x: char Type of print
 * @T_func: funct
 */
typedef struct print
{
  char *x;
  void (*T_func)(va_list);
} t_print;

#endif
