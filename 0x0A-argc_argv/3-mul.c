#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc __attribute__((unused)), char* argv[])
{
for(,argc > 2,)
{
    duoble result;
    scanf("%d",*argv[1]);
    scanf("%d",*argv[2]);
    result = *argv[1] * *argv[2];
    printf("%d\n", result);
}
else
{
    printf("Error");
    return (1);
}
