#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of random generated numbers.
 *
 * Return: 0
*/
int main(void)
{
int n;
int lb;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (lb > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lb);
}
else if (lb == 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lb);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, lb);
}
return (0);
}
