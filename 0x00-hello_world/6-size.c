#include <stdio.h>

/**
* You should produce the exact same output as in the example
* Warnings are allowed
*
* Your program should return 0
*/

int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of a int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
