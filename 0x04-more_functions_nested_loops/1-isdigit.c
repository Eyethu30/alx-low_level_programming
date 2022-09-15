#include "main.h"

/**
 *_isdigit - checks whether the character is a digit or not
 * @c: tested character
 * Return: 1
 * if true amd zero if not 
 */

int _isdigit(int c)
{
    if ((c >= 48) && (c <= 57))
    {
        return (1); 
    }
    return (0);
}
