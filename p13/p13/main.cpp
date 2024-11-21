#include<stdio.h>
#include<stdlib.h>

void callbyReference(int& nptr);

int main()
{
	int number = 5;
	printf("The original value of number is %d", number);
	
	callbyReference(number);

	printf("\nThe new value of number is %d", number);
}
void callbyReference(int& nptr)
{
	nptr = nptr * nptr * nptr;
}