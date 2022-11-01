#include "main.h"
#include <stdio.h>
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content);
{
    char i;
    int count;
    if (filename == NULL)
    {
        return (-1);
    }
    if (text_content == NULL)
    {
        open(filename, O_WRONLY);
    }
    if (filename)
    {
    for (fn[i])
    {
        if (fn[i] != '/0')
        {
            count = 0;
            count++;
        }
    }
    open(filename, O_RDWR);
    filename *fn;
    write(fn, text_content, count)
    return (1)
    }
    else 
    {
        return (-1);
    }
}
