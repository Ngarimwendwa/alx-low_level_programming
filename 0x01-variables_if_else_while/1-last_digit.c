#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive, zero ,or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero or negative
* Return: 0
*/

int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l =  n % 10;

if (1>5)
{
	printf("Last digit of %d and is greater than 5\n", n, l);
}
else if (1==0)
{
	printf("Last digit of %d and is 0\n", n, l);
}
else
{
	printf("Last digit of %d and is less than 6 and not 0\n", n, l);
}
return (0);
