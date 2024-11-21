#include <stdio.h>
#include <stdlib.h>

int callbyvalue(int n);

int main()
{
	int number = 5;
	printf("The orrginal value of number is %d", number);

	number = callbyvalue(number);

	printf("\nThe new value of number is %d\n", number);
}
int callbyvalue(int n)
{
	n = n * n * n;
	return n;
}