#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter first no.:");
	scanf("%d",&num1);
	printf("Enter second no.:");
	scanf("%d",&num2);
	if(num1%num2==0)
	{
		printf("Number is divisible by anthor");
	}else{
		printf("Number is not divisible by another");
	}
}
