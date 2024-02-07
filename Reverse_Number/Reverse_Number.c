#include<stdio.h>

//Write a C program to reverse and print a given number.

int main()
{
	int number,ReverseNumber;
	
	printf("Input the numberI(3 digits): ");		scanf("%d",&number);
	if((number <100) || (number > 999))
	{
		printf("The number is not 3 digits!\n");
		return 0;
	}
	
	ReverseNumber = (number % 10)*100 +(number / 100);	
	number = number - (number / 100)*100;
	ReverseNumber = ReverseNumber + (number / 10)*10;
	
	printf("Reverse Number = %d\n",ReverseNumber);
	return 0;
}
