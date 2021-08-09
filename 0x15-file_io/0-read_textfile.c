#include "main.h"
#include "holberton.h"

/**
* read_textfile - read text and print it to POSIX
* @filename: name of file char
* @letters:number of letters to read size_t
* Return: read the file display or error 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f, r, w;
char *buff = malloc(sizeof(char) * letters);

if (filename == NULL)
{
return (0);
}

f = open(filename, O_RDWR);
if (f == -1)
{
return (0);
}
r = read(f, buff, letters);
if (r == -1)
{
return (0);
}
w = write(STDOUT_FILENO, buff, r);
if (w == -1)
{
return (0);
}
close(f);
free(buff);
return (w);
}
