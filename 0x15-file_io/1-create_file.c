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
    char nt;
    int numLet;
    if (filename == NULL)
    {
        return (-1);
    }
    if (text_content == NULL)
    {
        create(filename, O_RDWR);
    }
    if(filename)
        if(text_content)
        {
            file *fn;
            open(filename, O_RDWR);
            nt = text_content + '/0';
            for (numLet = 0, text_content[numLet], numLet++)
            {
                written = write(fn, nt, numLet);
            }
            if (written == -1)
            {
                return (-1);
            }
        }
        close(fn);

	return (1);
}
