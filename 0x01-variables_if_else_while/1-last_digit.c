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

if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0");
}
if (n < 6 && n != 0)
{
printf("less than 6 not 0");
}
Print("\n");
  
return (0);
}

