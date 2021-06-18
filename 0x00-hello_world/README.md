Low level programming scripts
=============================

 0. gcc -E $CFILE > c [runs a C file through the preprocessor and save the result into another file.]

 1. gcc -c $CFILE -o main.o  [compiles a C file but does not link and saves the results into the file main.o]

 2. gcc -S $CFILE -o 2-main.c [generates the assembly code of a C code and save it in the 2-main.s file]

 3. gcc $CFILE -o cisfun  [compiles a C file and creates an executable named cisfun]

 4. [prints exactly "Programming is like building a multilingual puzzle, followed by a new line]

#include <stdio.h>                                                                                                              
#include <string.h>                                                                                                             
/**                                                                                                                             
* main - Entry point                                                                                                            
*                                                                                                                               
* Return: Always 0 (Success)                                                                                                    
*/                                                                                                                              
int main(void)                                                                                                                  
{                                                                                                                               
char *s = "Programming is like building a multilingual puzzle";                                                                 
puts(s);                                                                                                                        
return (0);                                                                                                                     
}

 5. [_prints exactly_ with proper grammar, but the outcome is a piece of art, _,followed by a new line._]

#include <stdio.h>                                                                                                               
/**                                                                                                                              
* main - Entry point                                                                                                             
*                                                                                                                                
* Return: Always 0 (Success)                                                                                                     
*/                                                                                                                               
int main(void)                                                                                                                   
{                                                                                                                                
printf("with proper grammar, but the outcome is a piece of art,\n");                                                             
return (0);                                                                                                                      
}     

 5. [prints the size of various types on the computer it is compiled and run on.]

#include <stdio.h>                                                                                                               
/**                                                                                                                              
* main - Entry point                                                                                                             
*                                                                                                                                
* Return: Always 0 (Success)                                                                                                     
*/                                                                                                                               
int main(void)                                                                                                                   
{                                                                                                                                
printf("Size of a char : %2d bytes\n", sizeof(char));                                                                            
printf("Size of an int : %2d bytes\n", sizeof(int));                                                                             
printf("Size of a long int : %2d bytes\n", sizeof(long int));                                                                    
printf("Size of a long long int : %2d bytes\n", sizeof(long long int));                                                          
printf("Size of a float : %2d bytes\n", sizeof(float));                                                                          
return (0);                                                                                                                      
}                       