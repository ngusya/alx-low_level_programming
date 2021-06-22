#include "holberton.h"
/**
 * main - Entry block
 * Description: prints holberton on a new line
 * Return: 0
 */

int main()
{
  char c[] = "Holberton";
  char *s;

  s = c;     

      while(*s != '\0')                                                                                                             
	{                                                                                                                           
	  _putchar(*s);                                                                                                                  
	  s++;                                                                                                                          
	}                                                                                                                             _putchar('\n');
      return(0);                                                                                                                    
    }  
