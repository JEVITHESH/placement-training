#include <stdio.h>
void main(){
	int number, result;
	printf("Enter a number : ");
	scanf("%d", &number);
	result =  number >> 1 ;
	printf("The result is : %d\n", result);
}
