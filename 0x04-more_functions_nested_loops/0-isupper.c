#include  "main.h"

/**
 * _isupper - check whether a letter is uppercase or not 
 * @c: charater to be tested
 * Return: 1 whether it is 0 otherwise.
 */

int _isupper(int c)

{
    if ((c >= 'A') && (c <= 'Z'))
    {
        return (1);
    }
    return (0);
}
