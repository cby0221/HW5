#include <stdio.h>
#include <stdlib.h>

void callbyaddress(int* nptr);

int main()
{
	int number = 5;
	printf("The original value of number is %d", number);

	callbyaddress(&number);

	printf("\nThe new value of number is %d\n", number);
}
void callbyaddress(int* nptr)
{
	*nptr = *nptr * *nptr * *nptr;
}