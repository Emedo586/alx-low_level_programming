#include "main.h"

/**
* create_file - To creates a file.
* @filename: filename to create.
* @text_content: content of the file to write.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fp;
int result = 1, count = 0;
if (!filename)
{
return (0);
}
fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fp == -1)
{
return (-1);
}
if (text_content)
{
while (text_content[count])
count++;
result = write(fp, text_content, count);
}
if (result == -1)
return (-1);
close(fp);
return (1);
}
