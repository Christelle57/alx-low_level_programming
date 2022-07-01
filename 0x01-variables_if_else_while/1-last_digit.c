#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/

int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

scanf("%d", &n);

if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}

