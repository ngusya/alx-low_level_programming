#include "main.h"
#include "holberton.h"

/**
* append_text_to_file - appand a text to the end of file
* @filename: name of file to be create
* @text_content: text content of the file
* Return: 1 (on success) or -1 (on failure)
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f, len, w;

if (filename == NULL)
return (-1);
f = open(filename, O_APPEND | O_WRONLY);
if (f == -1)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len] != '\0'; len++);
w = write(f, text_content, len);
if (w == -1)
return (-1);
}
close(f);
return (1);
}
