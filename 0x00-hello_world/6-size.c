#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
char size_char;
int size_int;
long int size_long;
long long size_long_long;
float size_float;
printf("Size of a char: %lu byte(s)\n", sizeof(size_char));
printf("Size of an int: %lu byte(s)\n", sizeof(size_int));
printf("Size of a long int: %lu byte(s)\n", sizeof(size_long));
printf("Size of a long long int: %lu byte(s)\n", sizeof(size_long_long));
printf("Size of a float: %lu byte(s)\n", sizeof(size_float));

return (0);
}
