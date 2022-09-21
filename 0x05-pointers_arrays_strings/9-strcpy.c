#include "main.h"

/**
 * char *_strcpy - copies string from src
 * @dest: copy
 * @src: copy 
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
int ss = 0;
while (*(src + ss) != '\0')
{
*(dest + ss) = *(src + ss);
ss++;
}
*(dest + ss) = '\0';  
return (dest);
}
