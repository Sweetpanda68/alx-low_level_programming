#include "main.h"

/**
 * main - print _putchare
 * Return: means success
 */
int main(void)
{
char sweet[] = "_putchar";

int c;

for (c = 0; c < 8; c++)
{
_putchar(sweet[c]);
}
_putchar('\n');
return (0);
}
