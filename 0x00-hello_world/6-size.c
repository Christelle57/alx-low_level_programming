#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: O Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

scanf("%d", &a);
scanf("%ld", &b);
scanf("%ld", &c);
scanf("%f", &f);
scanf("%c", &d);

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
