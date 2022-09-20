#include "main.h"
#include <stdio.h>

/**
 *char *s - is a pointer variable
 *int _strlen(char *s) - is supposed to print the length of a string 
 *return - the funtion will return the length of the len string
 */

int _strlen(char *s);
{
char *s;
char len;
*s = "This is a random string";
len = strlen(*s);
return (len);
}
